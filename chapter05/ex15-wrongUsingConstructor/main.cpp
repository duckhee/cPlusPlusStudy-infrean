#include <iostream>

using namespace std;

class MyDataA {
public:
    MyDataA() {
        cout << "MyDataA()" << endl;
    }

    ~MyDataA() {
        cout << "~MyDataA()" << endl;
    }
};

class MyDataB : public MyDataA {
public:
    MyDataB() {
        cout << "MyDataB()" << endl;
        pszData = new char[32];
        strcpy(pszData, "TestString");
    }

    ~MyDataB() {
        cout << "~MyDataB()" << endl;
        delete[] pszData;
    }

    char *getString() const {
        return this->pszData;
    }

protected:
    char *pszData = nullptr;
};

class MyDataC : public MyDataB {
public:
    MyDataC() {
        cout << "MyDataC()" << endl;
        /** 생성자에서 부모에 대한 값을 변경하면 안된다. -> 하면 안되는 문제점 */
//        pszData = nullptr;
        /** 여기서 재정의를 하면 부모에서 정의한 만큼과 호출된 횟수의 곱셈의 크기만큼 메모리 누수가 발생한다. */
//        pszData = new char[32];
    }

    ~MyDataC() {
        cout << "~MyDataC()" << endl;
    }

};

int main() {
    MyDataC data;
    cout << data.getString() << endl;
    return 0;
}