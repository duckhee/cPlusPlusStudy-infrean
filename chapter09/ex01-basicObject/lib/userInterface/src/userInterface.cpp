#include <iostream>
#include "userInterface.h"
#include "myList.h"

using namespace std;


CUserInterface::CUserInterface(CMyList &rList)
        : m_list(rList) {
}

CUserInterface::~CUserInterface(void) {
}

void CUserInterface::add(void) {
    char szName[32] = {0};
    char szPhone[32] = {0};

    printf("Input name : ");
    fgets(szName, sizeof(szName), stdin);

    printf("Input phone number : ");
    fgets(szPhone, sizeof(szPhone), stdin);

    m_list.addNewNode(szName, szPhone);
}

int CUserInterface::printUI(void) {
    int nInput = 0;

    clear();
    printf("[1]Add\t[2]Search\t[3]Print all\t[4]Remove\t[0]Exit\n:");

    scanf("%d%*c", &nInput);

    return nInput;
}

void CUserInterface::search(void) {
    char szName[32] = {0};
    CUserData *pNode = NULL;

    printf("Input name : ");
    fgets(szName, sizeof(szName), stdin);


    pNode = m_list.findNode(szName);

    if (pNode != NULL) {
        printf("[%p] %s\t%s [%p]\n",
               pNode,
               pNode->getName(), pNode->getPhone(),
               pNode->getNext());
    } else
        puts("ERROR: µ•¿Ã≈Õ∏¶ √£¿ª ºˆ æ¯Ω¿¥œ¥Ÿ.");

    getchar();
}

void CUserInterface::remove(void) {
    char szName[32] = {0};

    printf("Input name : ");
    fgets(szName, sizeof(szName), stdin);

    if (m_list.removeNode(szName))
        puts("ªË¡¶øœ∑·.");
    else
        puts("ERROR: ªË¡¶«“ µ•¿Ã≈Õ∏¶ √£¿ª ºˆ æ¯Ω¿¥œ¥Ÿ.");
    getchar();
}

int CUserInterface::run(void) {
    int nMenu = 0;
    clear();
    while ((nMenu = this->printUI()) != 0) {
        switch (nMenu) {
            case 1:    //Add
                add();
                break;

            case 2:    //Search
                search();
                break;

            case 3:    //Print all
                m_list.printAll();
                break;

            case 4:    //Remove
                remove();
                break;
        }
    }

    return nMenu;
}
