#include <iostream>

using namespace std;

/** Composition 한 관계 이다. */

/** MyList 에 속해 있는 class 이다. -> MyList 에 의해서 Life cycle 이 결정이 된다. */
class Node {
    /** MyList class 에서 Node class 에 대한 접근에 대해서 접근 제어자의 영향을 받지 않는다고 선언 하는 것이다. */
    friend class MyList;

public:
    /** 묵시적인 생성이 안 되도록 하는 keyword explicit */
    /** 변환 생성자 */
    explicit Node(const char *pszName) {
        strcpy(name, pszName);
    }

private:
    char name[32];
    /** single linked list next node */
    /** 자기 참조하는 형태이다. -> aggregation 관계라고 이야기 가능하다. */
    Node *pNext = nullptr;
};


class MyList {
public:
    MyList() : headNode("Dummy Head") {
        /** Node 에 friend 로 MyList 가 정의 되어 있어서 접근이 가능하다. */
        headNode.pNext = nullptr;
    }

    ~MyList() {
        cout << "~MyList()" << endl;
        Node *pNode = headNode.pNext;
        Node *pDelete = nullptr;
        while (pNode != nullptr) {
            pDelete = pNode;
            pNode = pNode->pNext;
            cout << pDelete->name << endl;
            delete pDelete;
        }
    }

    void addNewNode(const char *pszName) {
        Node *pNewNode = new Node(pszName);
        pNewNode->pNext = headNode.pNext;
        headNode.pNext = pNewNode;
    }

    void print() {
        Node *tempNode = headNode.pNext;
        while (tempNode != nullptr) {
            cout << tempNode->name << endl;
            tempNode = tempNode->pNext;
        }
    }

private:
    Node headNode;
};

int main() {
    MyList list;
    list.addNewNode("길동");
    list.addNewNode("철수");
    list.addNewNode("영희");
    list.print();
    return 0;
}