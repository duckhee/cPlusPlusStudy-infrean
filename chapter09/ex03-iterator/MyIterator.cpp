#include <iostream>
#include "MyIterator.h"

using namespace std;

MyIterator::MyIterator() : m_pHead(nullptr), m_pCurrentNode(nullptr) {}

MyIterator::~MyIterator() {}

MyNode *MyIterator::getCurrent() const {

    return this->m_pCurrentNode;
}


void MyIterator::moveNext() {

    if (m_pCurrentNode != nullptr)
        this -> m_pCurrentNode = this->m_pCurrentNode->getNext();
}

