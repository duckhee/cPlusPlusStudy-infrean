#ifndef CPLUSPLUSSTUDY_INFREAN_MYLIST_H
#define CPLUSPLUSSTUDY_INFREAN_MYLIST_H

#include "MyNode.h"
#include "MyIterator.h"

class MyList {
public:
    MyList(MyNode *pHead);

    ~MyList(void);

    MyNode *findNode(const char *pszKey);

    int addNewNode(MyNode *pNewNode);

    MyIterator makeIterator(void);

    virtual int onAddNewNode(MyNode *pNewNode);

    int removeNode(const char *pszKey);

protected:
    void releaseList(void);

    MyNode *m_pHead;
};


#endif //CPLUSPLUSSTUDY_INFREAN_MYLIST_H
