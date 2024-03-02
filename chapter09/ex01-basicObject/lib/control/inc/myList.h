#ifndef CPLUSPLUSSTUDY_INFREAN_MYLIST_H
#define CPLUSPLUSSTUDY_INFREAN_MYLIST_H


#include "userData.h"

class CMyList {
public:
    CMyList(void);

    ~CMyList(void);

protected:
    void releaseList(void);

    CUserData m_Head;

public:
    CUserData *findNode(const char *pszName);

    int addNewNode(const char *pszName, const char *pszPhone);

    void printAll(void);

    int removeNode(const char *pszName);
};

#endif //CPLUSPLUSSTUDY_INFREAN_MYLIST_H
