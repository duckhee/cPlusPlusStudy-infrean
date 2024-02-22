#include <iostream>
#include "CMyString.h"

using namespace std;


int main() {
    CMyString myString;
    myString.setData("Hello");
    cout << myString.getData() << endl;
    cout << "length : " << myString.getLength() << endl;
//    *(myString.getData()) = 'A';
    return 0;
}