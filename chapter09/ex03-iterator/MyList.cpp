#include "MyList.h"
#include "UserData.h"
#include <cstdio>
#include <cstring>

MyList::MyList(MyNode *pHead) {
    this->m_pHead = pHead;
}

MyList::~MyList() {
    this->releaseList();
}

int MyList::addNewNode(MyNode *pNewNode) {
    if (this->findNode(pNewNode->getKey()) != nullptr) {
        delete pNewNode;
        return 0;
    }
    if (this->onAddNewNode(pNewNode)) {
        pNewNode->pNext = m_pHead->pNext;
        m_pHead->pNext = pNewNode;
        return 1;
    }
    return -1;
}

MyNode *MyList::findNode(const char *pszKey) {
    MyNode *pTemp = m_pHead->pNext;
    while (pTemp != NULL) {
        if (strcmp(pTemp->getKey(), pszKey) == 0) {
            return pTemp;
        }
        pTemp = pTemp->pNext;
    }
    return NULL;
}

int MyList::removeNode(const char *pszKey) {
    MyNode *pPrevNode = m_pHead;
    MyNode *pDelete = NULL;
    while (pPrevNode->pNext != NULL) {
        pDelete = pPrevNode->pNext;
        if (strcmp(pDelete->getKey(), pszKey) == 0) {
            pPrevNode->pNext = pDelete->pNext;
            delete pDelete;
            return 1;
        }
        pPrevNode = pPrevNode->pNext;
    }
    return 0;
}

void MyList::releaseList() {
    MyNode *pTemp = m_pHead;
    MyNode *pDeleteNode = NULL;
    while (pTemp != NULL) {
        pDeleteNode = pTemp;
        pTemp = pTemp->pNext;
        delete pDeleteNode;
    }
    m_pHead = NULL;
}

MyIterator MyList::makeIterator() {
    MyIterator iterator;
    iterator.m_pCurrentNode = m_pHead->pNext;
    iterator.m_pHead = m_pHead->pNext;
    return iterator;
}

int MyList::onAddNewNode(MyNode *pNewNode) {
    return 1;
}