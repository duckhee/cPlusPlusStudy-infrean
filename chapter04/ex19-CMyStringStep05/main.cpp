#include <iostream>
#include "CMyString.h"

using namespace std;

CMyString getHello() {
    CMyString hello;
    hello.setData("Hello");
    return hello;
}

int main(int argc, char **argv) {
    CMyString result;
    result = ::getHello();
    cout << result << endl;
    /** 이동 생성자를 호출하기 위한 방법 */
    CMyString test(std::move(::getHello()));
    return 0;
}