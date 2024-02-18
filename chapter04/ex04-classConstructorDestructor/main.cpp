#include <iostream>

using namespace std;

class Test {
public:
    /** 생성자 함수 -> default constructor */
    Test() {
        cout << "Test::Test()" << endl;
    }

    /** 소멸자 함수 -> destructor */
    ~Test() {
        cout << "Test::~Test()" << endl;
    }
};

/** main 함수가 호출되기 전에 생성자가 호출이 된다.*/
Test g_test;

int main() {
    cout << "Begin" << endl;
    Test test;
    /** 동적으로 할당 -> new 연산이 될 때 생성자가 호출 된다. */
    Test *pTest = new Test();
    /** 메모리에서 해제가 될 때 소멸자가 호출 된다. */
    delete pTest;
    cout << "end" << endl;
    /** 호출된 scope 가 종료되는 시점에 소멸자가 호출 된다.*/
    return 0;
}