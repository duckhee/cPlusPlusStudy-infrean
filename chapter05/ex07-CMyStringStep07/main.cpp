#include <iostream>
#include "CMyString.h"

using namespace std;

CMyString getString(const char *pParam) {
    CMyString result;
    result.setData(pParam);
    return result;
}

int main() {
    CMyString hello("Hello ");
    CMyString world("World");
    cout << hello + world << endl;

    cout << "(const char[]) Hello " + world << endl;
    /** r-value 연산을 위한 대입 연산 재정의 호출 */
    CMyString getText = std::move(getString("testingResult"));
    CMyString moveConstructor(std::move(getString("testingResult")));
    cout << getText << endl;

    /** 단항 연산에 대한 재정의 */
    hello += world;
    cout << hello << endl;
    getText += "Testing";
    cout << getText << endl;
    /** 배열 요소에 대한 접근에 대한 출력 */
    cout << hello[6] << endl;
    cout << hello[-1] << endl;
    cout << hello[20] << endl;
    cout << hello[7] << endl;
    /** l-value 에 대한 배열 접근을 추가해줘야 사용이 가능하다. */
    hello[7] = 'a';
    cout << hello[7] << endl;
    cout << hello << endl;
    return 0;
}