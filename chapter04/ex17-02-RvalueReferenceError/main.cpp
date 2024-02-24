#include <iostream>

using namespace std;

/** int 형에 대한 참조형을 매개변수로 받는 함수이다. */
void testFunc(int &data) {
    cout << "testFunc(int&)" << endl;
}

/** 상수에 대한 참조형을 매개변수로 받는 함수이다. */
void testFunc(int &&data) {
    cout << "testFunc(int&&)" << endl;
}

/** int 형을 매개변수로 받는 함수이다. -> 상수에 대한 참조형을 받는 함수와 충돌이 난다. */
void testFunc(int data) {
    cout << "testFunc(int)" << endl;
}

int main() {
    /** 함수를 어떤 것을 호출을 해야하는지 모호해지기 떄문에 에러가 발생한다. */
//    testFunc(3 + 4);
    return 0;
}