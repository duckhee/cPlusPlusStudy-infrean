#ifndef CPLUSPLUSSTUDY_INFREAN_MYLIST_H
#define CPLUSPLUSSTUDY_INFREAN_MYLIST_H

class MyNode;

class MyList {
public:
    MyList(MyNode *pHead);

    ~MyList(void);

    MyNode *findNode(const char *pszKey);

    int addNewNode(MyNode *pNewNode);

    void printAll(void);

    int removeNode(const char *pszKey);

protected:
    void releaseList(void);

    MyNode *m_pHead;
};


#endif //CPLUSPLUSSTUDY_INFREAN_MYLIST_H
