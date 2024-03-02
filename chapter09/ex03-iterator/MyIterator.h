#ifndef CPLUSPLUSSTUDY_INFREAN_MYITERATOR_H
#define CPLUSPLUSSTUDY_INFREAN_MYITERATOR_H

#include "MyNode.h"


class MyIterator {
    friend class MyList;

public:
    MyIterator();

    ~MyIterator();

    MyNode *getCurrent(void) const;

    void moveNext(void);

private:
    MyNode *m_pHead;
    MyNode *m_pCurrentNode;
};


#endif //CPLUSPLUSSTUDY_INFREAN_MYITERATOR_H
