#include "MyListEx.h"
#include <cstdio>
#include <cstring>


MyListEx::MyListEx(MyNode *pHead)
        : MyList(pHead) {
}

MyListEx::~MyListEx(void) {
}

int MyListEx::onAddNewNode(MyNode *pNewNode) {
    if (strcmp(pNewNode->getKey(), "멍멍이아들") == 0)
        return 0;

    return 1;
}
