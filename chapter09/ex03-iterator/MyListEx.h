
#ifndef CPLUSPLUSSTUDY_INFREAN_MYLISTEX_H
#define CPLUSPLUSSTUDY_INFREAN_MYLISTEX_H

#include "MyList.h"

class MyListEx : public MyList {
public:
    MyListEx(MyNode *pHead);

    ~MyListEx(void);

    int onAddNewNode(MyNode *pNewNode) override;

};


#endif //CPLUSPLUSSTUDY_INFREAN_MYLISTEX_H
