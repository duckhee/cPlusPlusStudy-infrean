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

Test g_test;

int main() {
    cout << "Begin" << endl;
    Test test;
    /** 동적으로 할당 */
    Test *pTest = new Test();
    delete pTest;
    cout << "end" << endl;
    return 0;
}