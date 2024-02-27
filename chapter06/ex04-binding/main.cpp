#include <iostream>

using namespace std;

void testFunc1() {
    cout << "testFunc1()" << endl;
}

void testFunc2() {
    cout << "testFunc2()" << endl;
}

int main() {
    /** 정적 바인딩 */
    testFunc1();
    int input;
    cin >> input;

    /** 함수 pointer 배열 */
    void (*pFunc[2])() = {testFunc1, testFunc2};
    /** 입력 값에 따른 동적 바인딩 */
    if (input > 5) {
        pFunc[0]();
    } else {
        pFunc[1]();
    }
    return 0;
}