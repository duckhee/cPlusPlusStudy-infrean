#include <iostream>

using namespace std;

class Test {
public:
    Test() {
        cout << "Test()" << endl;
    }

    ~Test() {
        cout << "~Test()" << endl;
    }

    void testFunc(void) {
        cout << "testFunc(void)" << endl;
    }
};

/** 배열에 대한 메모리 해제를 위한 함수 정의 */
void removeTestArray(Test *pTest) {
    cout << "RemoveTest()" << endl;
    delete[] pTest;
}

int main() {
    cout << "******* Begin *******" << endl;
    /** shared_ptr은 다음과 같이 소멸자에 대한 callback을 받아서 소멸자를 사용자 지정이 가능하다. */
    shared_ptr<Test> ptrArray(new Test[3], removeTestArray);
    cout << "******* End *******" << endl;
    return 0;
}