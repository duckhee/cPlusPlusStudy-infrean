#include <iostream>

using namespace std;

class MyData {
public:
    MyData() {
        cout << "MyData()" << endl;
    }

    virtual ~MyData() {
        cout << "~MyData()" << endl;
    }

    virtual void testFunc1() {
        cout << "MyData::testFunc1()" << endl;
    }

    virtual void testFunc2() {
        cout << "MyData::testFunc2()" << endl;
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

    /** 기본 클래스에 virtual keyword 가 되어 있으므로 여기서 가상 함수를 재정의 해준다. -> keyword 는 한번만 나와도 된다. */
    void testFunc1() {
        cout << "MyDataEx::testFunc1()" << endl;
    }

    void testFunc2() {
        cout << "MyDataEx::testFunc2()" << endl;
    }
};


int main() {
    /** 추상자료형으로 선언 */
    MyData *pData = new MyDataEx;
    pData->testFunc2();
    delete pData;
    return 0;
}