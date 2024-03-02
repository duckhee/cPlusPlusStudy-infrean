#include "MyNode.h"

MyNode::MyNode() : pNext(nullptr) {

}

MyNode::~MyNode() {

}

MyNode *MyNode::getNext(void) const {
    return this->pNext;
}