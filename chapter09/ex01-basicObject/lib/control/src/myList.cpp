#include <iostream>
#include "myList.h"
#include <cstdio>
#include <cstring>

CMyList::CMyList(void) {
}

CMyList::~CMyList(void) {
    releaseList();
}

int CMyList::addNewNode(const char *pszName, const char *pszPhone) {
    CUserData *pNewUser = nullptr;

    if (findNode(pszName) != nullptr)
        return 0;

    pNewUser = new CUserData;
    strcpy(pNewUser->szName, pszName);
    strcpy(pNewUser->szPhone, pszPhone);
    pNewUser->pNext = NULL;

    pNewUser->pNext = m_Head.pNext;
    m_Head.pNext = pNewUser;

    return 1;
}

void CMyList::printAll(void) {
    CUserData *pTmp = m_Head.pNext;

    while (pTmp != NULL) {
        printf("[%p] %s\t%s [%p]\n",
               pTmp,
               pTmp->szName, pTmp->szPhone,
               pTmp->pNext);

        pTmp = pTmp->pNext;
    }

    printf("CUserData Counter : %d\n",
           CUserData::getUserDataCounter() - 1);

    getchar();
}

CUserData *CMyList::findNode(const char *pszName) {
    CUserData *pTmp = m_Head.pNext;

    while (pTmp != nullptr) {
        if (strcmp(pTmp->szName, pszName) == 0)
            return pTmp;

        pTmp = pTmp->pNext;
    }

    return nullptr;
}

int CMyList::removeNode(const char *pszName) {
    CUserData *pPrevNode = &m_Head;
    CUserData *pDelete = NULL;

    while (pPrevNode->pNext != NULL) {
        pDelete = pPrevNode->pNext;

        if (strcmp(pDelete->szName, pszName) == 0) {
            pPrevNode->pNext = pDelete->pNext;
            delete pDelete;

            return 1;
        }

        pPrevNode = pPrevNode->pNext;
    }

    return 0;
}

void CMyList::releaseList(void) {
    CUserData *pTmp = m_Head.pNext;
    CUserData *pDelete = NULL;

    while (pTmp != NULL) {
        pDelete = pTmp;
        pTmp = pTmp->pNext;

        delete pDelete;
    }

    m_Head.pNext = NULL;
}