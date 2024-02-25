#include <iostream>
#include "CMyString.h"

using namespace std;

int main() {
    CMyString hello("Hello ");
    CMyString world("world");
    /** 묵시적 생성에 대한 방지하기 위한 explicit 를 사용 했기 때문에 발생한 에러가 있으므로 해당 keyword 를 제거 해주거나 CMyString operator+(const char *pszData)를 재 정의 해주면 해결이 된다. */
    hello + "World";
    cout << hello << endl;
    "Hello " + world;
    cout << "Hello " + world << endl;
    return 0;
}

