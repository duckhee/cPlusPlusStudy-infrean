#include <cstdio>
#include <cstring>
#include "UserData.h"


int UserData::nUserDataCounter = 0;


UserData::UserData() {
    memset(szName, '\0', sizeof(szName));
    memset(szPhone, '\0', sizeof(szPhone));
    nUserDataCounter++;
}

UserData::UserData(const char *pszName, const char *pszPhone) {
    memset(szName, '\0', sizeof(szName));
    memset(szPhone, '\0', sizeof(szPhone));

    strcpy(szName, pszName);
    strcpy(szPhone, pszPhone);

    nUserDataCounter++;
}

UserData::~UserData() {
    nUserDataCounter--;
}

const char *UserData::getKey(void) {
    return this->szName;
}


void UserData::printNode(void) {
#ifdef _DEBUG
    printf("[%p] %s\t%s [%p]\r\n", this, this->szName, this->szPhone, this->getNext());
#else
    printf("%s\t%s\r\n", this->szName, this->szPhone);
#endif
}

const char *UserData::getName(void) const {
    return this->szName;
}

const char *UserData::getPhone(void) const {
    return this->szPhone;
}

int UserData::getUserDataCounter(void) {
    return nUserDataCounter;
}