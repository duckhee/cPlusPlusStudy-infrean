#include <iostream>

using namespace std;

/** 보통 함수 연산에 대해 재 정의를 한 객체를 함수 객체라고 한다. -> functor 라고도 한다.*/
class TestFunc {
public:
    TestFunc() = default;

    ~TestFunc() = default;

    /** 함수 호출에 대한 재정의 */
    int operator()(int a, int b) {
        return a + b;
    }

    /** 함수 호출에 대한 재정의 */
    int operator()(void) {
        return 0;
    }

    /** 형 재정의 */
    operator int() {
        return -1;
    }
};


void testForTest(TestFunc &rhs) {
    /** 함수형 포인터를 받아 호출하는 형태가 된다. */
    /** call back 구조와 동일한 횩과가 된다. */
    cout << rhs(5, 10) << endl;
}

int main() {
    TestFunc test;
    cout << test << endl;
    cout << test() << endl;
    cout << test(3, 4) << endl;
    /** 다음과 같은 경우 함수 pointer 를 인자로 넣어주는 것과 동일한 효과가 있다. */
    testForTest(test);
    return 0;
}