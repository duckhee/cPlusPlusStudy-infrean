#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
    Test() {
        cout << "Test()" << endl;
    }

    ~Test() {
        cout << "~Test()" << endl;
    }

    void testFunc() {
        cout << "testFunc()" << endl;
    }
};

void removeArrayTest(Test *pTest) {
    cout << "removeArrayTest(Test *)" << endl;
    delete[] pTest;
}

int main() {
    /** 유일한 pointer 를 만들어 주는 unique_ptr 이다.*/
    unique_ptr<Test> ptr(new Test);
    /** 대입 연산 및 동일한 pointer 를 만들려고 하면 컴파일 에러가 발생한다. */
//    unique_ptr<Test>ptr2(ptr);
//    unique_ptr<Test> ptr2;
//    ptr2 = ptr;
    /** unique_ptr 에 대한 소멸자를 사용자 정의 하는 방법 -> 해당 방법 처럼 functional 로 만들어줘야 소멸자 대입이 가능하다. */
    //unique_ptr<Test, std::function<void (Test*)>> ptr1(new Test[3], removeArrayTest);
//    unique_ptr<Test, void (*)(Test *)> ptr1(new Test[3], removeArrayTest);
//    unique_ptr<Test, decltype(&removeArrayTest)> ptr1(new Test[3], removeArrayTest);
    return 0;
}