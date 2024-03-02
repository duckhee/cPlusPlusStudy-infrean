#include "UserInterface.h"
#include "MyList.h"
#include "UserData.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "MyIterator.h"


UserInterface::UserInterface(MyList &list) : m_list(list) {

}

UserInterface::~UserInterface() {

}

void UserInterface::add() {
    char szName[32] = {'\0'};
    char szPhone[32] = {'\0'};

    printf("Input name : ");
    scanf("%s", szName);
    printf("Input phone number : ");
    scanf("%s", szPhone);

    UserData *pNewUser = new UserData(szName, szPhone);
    m_list.addNewNode(pNewUser);
}

int UserInterface::printUI() {
    int nInput = 0;
    clear();
    printf("[1]Add\t[2]Search\t[3]Print all\t[4]Remove\t[0]Exit\n:");

    scanf("%d%*c", &nInput);
    return nInput;
}

void UserInterface::search() {
    char szName[32] = {'\0'};
    UserData *pNode = NULL;
    printf("Input name : ");
    scanf("%s", szName);
    pNode = static_cast<UserData *>(m_list.findNode(szName));
    if (pNode != NULL) {
        printf("[%p] %s\t%s [%p]\r\n", pNode, pNode->getName(), pNode->getPhone(), pNode->getNext());
    } else {
        puts("ERROR: not found node");
    }
    getchar();
}

void UserInterface::remove() {
    char szName[32] = {'\0'};
    printf("Input name : ");
    fgets(szName, sizeof(szName), stdin);
    if (m_list.removeNode(szName)) {
        puts("remove node");
    } else {
        puts("ERROR : remove failed");
    }
    getchar();
}

int UserInterface::run() {
    int nMenu = 0;
    while ((nMenu = printUI()) != 0) {
        switch (nMenu) {
            case 1:    //Add
                add();
                break;

            case 2:    //Search
                search();
                break;

            case 3:    //Print all
                this->printAll();
                break;

            case 4:    //Remove
                remove();
                break;
        }
    }

    return nMenu;
}

void UserInterface::printAll(void) {
    MyIterator it = m_list.makeIterator();
    UserData *pNode = NULL;

    while ((pNode = static_cast<UserData *>(it.getCurrent())) != NULL) {
        pNode->printNode();
        it.moveNext();
    }

    getchar();
}
