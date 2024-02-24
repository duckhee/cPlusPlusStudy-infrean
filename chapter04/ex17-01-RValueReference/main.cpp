#include <iostream>

using namespace std;

/** int 형에 대한 참조를 인자로 받는 함수이다.  */
void testFunc(int &value) {
    cout << "testFunc(int&)" << endl;
}

/** 상수에 대한 참조를 인자로 받는 함수이다. */
void testFunc(int &&value) {
    cout << "testFunc(int&&)" << endl;
}

int main() {
    /** r-value 참조는 상수에 대한 참조로 생각하면 된다. -> 임시 객체에 대한 참조이다. */
    int &&data = 3 + 4;
    /** 상수에 대한 참조가 불가능 하기 떄문에 에러가 발생한다. -> 변수에 대해서만 사용이 가능하다. */
//    int &vData = 3 + 4;
    cout << data << endl;
    data++;
    cout << data << endl;
    /** 상수형에 대한 참조하는 함수가 호출이 된다. -> 상수형 임시 객체에 대한 매개변수이므로 일치하는 매개변수의 값이 있는 함수가 호출이 된다.  */
    testFunc(3 + 4);
    testFunc(4);
    int testData(10);
    /** 실제로 변수로 선언이 되어 있기 때문에 int 형에 대한 참조하는 매개변수를 가지는 함수가 호출이 된다. */
    testFunc(testData);
    return 0;
}