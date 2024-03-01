#include <iostream>

using namespace std;

class MyData {
public:
    MyData() {
        cout << "MyData()" << endl;
    }

    ~MyData() {
        cout << "~MyData()" << endl;
    }
};

int main() {
    /** 자동으로 메모리 해제에 대한 기능을 해주는 pointer 이다. -> auto_ptr */
    auto_ptr<MyData> autoTest1(new MyData);
    cout << "********* Begin *********" << endl;
    {
        /** 자동으로 메모리 해제에 대한 기능을 해주는 pointer 이다. -> auto_ptr */
        auto_ptr<MyData> autoTest2(new MyData);
    }
    cout << "********* End *********" << endl;
    return 0;
}