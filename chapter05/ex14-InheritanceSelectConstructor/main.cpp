#include <iostream>

using namespace std;

class MyData {
public:
    MyData() {
        cout << "MyData()" << endl;
    }

    MyData(int data) {
        cout << "MyData(int)" << endl;
    }

    MyData(double data) {
        cout << "MyData(double)" << endl;
    }
};

class MyDataEx : public MyData {
public:
    MyDataEx() {
        cout << "MyDataEx()" << endl;
    }

    MyDataEx(int nParam) : MyData(nParam) {
        cout << "MyDataEx(int)" << endl;
    }

    MyDataEx(double data) : MyData() {
        cout << "MyDataEx(double)" << endl;
    }

    /** 따로 호출할 생성자를 지정하지 않으면 기보 생성자가 호출이 된다. */
    MyDataEx(char a) {
        cout << "MyDataEx(char)" << endl;
    }

};

int main() {
    MyDataEx a;
    cout << "**************" << endl;
    MyDataEx b(5);
    cout << "**************" << endl;
    MyDataEx c(10.5);
    cout << "**************" << endl;
    MyDataEx d('a');
    cout << "**************" << endl;
    return 0;
}
