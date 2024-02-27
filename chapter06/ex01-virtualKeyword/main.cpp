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

    /** 가상 함수 선언 -> 마지막에 정의된 함수가 호출이 된다. */
    /** 어떤 구조에 의해서 불려질 수 있다. -> called by framework */
    virtual void printData() {
        cout << "MyData::printData()" << endl;
    }

    void testFunc() {
        cout << "MyData::testFunc()" << endl;
        /** 가상 함수를 호출 하는 것이므로 나중에 정의된 함수를 호출한다. */
        printData();
    }
};

class MyDataEx : public MyData {
public:
    MyDataEx() {
        cout << "MyDataEx()" << endl;
    }

    ~MyDataEx() {
        cout << "~MyDataEx()" << endl;
    }

    /** 가상 함수 재정의 */
    virtual void printData() {
        cout << "MyDataEx::printData()" << endl;
    }

    /** 함수 재정의 */
    void testFunc() {
        cout << "MyDataEx::testFunc()" << endl;
        printData();
    }

};

int main() {
    /** 파생 클래스 선언 */
    MyDataEx a;
    /** 파생 클래스를 기본 클래스로 참조 */
    MyData &b = a;
    /** 가상 함수에 대한 호출 -> 가장 마지막에 정의된 파생 클래스의 함수가 호출이 된다. */
    a.printData();
    b.printData();

    a.testFunc();
    b.testFunc();
    return 0;
}