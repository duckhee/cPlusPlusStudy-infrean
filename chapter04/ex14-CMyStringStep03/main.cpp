#include <iostream>
#include "CMyString.h"

using namespace std;

int main() {
    CMyString hello;
    hello.setData("Hello");
    cout << hello.getData() << endl;
    cout << "length : " << hello.getLength() << endl;
    /** deep copy 를 구현해서 해당 값을 넣어준다. */
    CMyString world(hello);
    world.setData("World");
    cout << world.getData() << endl;
    cout << "length : " << world.getLength() << endl;

    return 0;
