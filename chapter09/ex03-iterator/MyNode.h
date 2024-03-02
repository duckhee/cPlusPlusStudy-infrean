#ifndef CPLUSPLUSSTUDY_INFREAN_MYNODE_H
#define CPLUSPLUSSTUDY_INFREAN_MYNODE_H


class MyNode {
    /** 어딘가에 정의된 MyList 에서 접근을 모두 허용한다는 의미 */
    friend class MyList;

public:
    MyNode(void);

    /** 상속 받은 class 에서 호출을 해주기 위한 가상화 */
    virtual ~MyNode(void);

    MyNode *getNext(void) const;

    /** 구현을 해야하는 함수 정의 */
    virtual const char *getKey(void) = 0;

    /** 구현을 해야하는 함수 정의 */
    virtual void printNode(void) = 0;

private:
    MyNode *pNext;
};


#endif //CPLUSPLUSSTUDY_INFREAN_MYNODE_H
