#include <iostream>
#include "CMyString.h"

using namespace std;

/** class 의 이름은 첫 글짜는 대문자로 하는 것이 관습이다. -> c++ 에서 C로 시작 하는 것은 class인 것을 알려주기 위한 것이다. */


int main(int argc, char **argv) {
    CMyString test;
    test.setData("Hello");
    cout << test.getData() << endl;
    test.setData("World!!");
    cout << test.getData() << endl;
    return 0;
}