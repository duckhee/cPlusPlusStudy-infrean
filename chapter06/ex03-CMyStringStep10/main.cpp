#include <iostream>
#include "CMyString.h"
#include "CMyStringFilter.h"

using namespace std;

int main() {
    CMyString *pstrData = new CMyStringFilter;
    pstrData->setData("멍멍이아들");
    cout << pstrData->getData() << endl;
    delete pstrData;
    return 0;
}