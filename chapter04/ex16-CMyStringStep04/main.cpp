#include <iostream>
#include "CMyString.h"

using namespace std;


void print(const char *pszData) {
    cout << "print - " << pszData << endl;
}

/** 다중 정의 가 되어 있을 때는 일치하는 형이 있으면 해당 함수를 호출 한다. */
void print(const CMyString &rhs) {
    cout << "print obj - " << rhs.getData() << endl;
}

int main() {
    CMyString hello;
    hello.setData("Hello");
    /** 객체에 대한 형 재정의를 통해서 직렬화를 진행을 해주었기 때문에 다음과 같이 cout을 사용할 수 있다. */
    cout << hello << endl;
    /** 묵시적 형 변환을 통한 객체 생성이 가능 하도록 지원 된다. -> 변환 생성자를 정의를 했기 때문이다. */
    CMyString world("world");
    cout << world << endl;
    /** 형 변환에 재정의가 되어 있기 때문에 문제가 발생하지 않는다. */
    print("hello");
    print("world");
    return 0;
}