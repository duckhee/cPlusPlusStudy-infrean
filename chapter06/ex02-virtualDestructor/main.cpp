#include <iostream>

using namespace std;

class MyData {
public:
    MyData() {
        cout << "MyData()" << endl;
        m_pszData = new char[32];
    }

    /** 기본 클래스에 소멸자에 virtual 을 넣어주면 알아서 파생 클래스의 소멸자를 불러준다. */
    virtual ~MyData() {
        cout << "~MyData()" << endl;
        delete[] m_pszData;
    }

private:
    char *m_pszData = nullptr;
};

class MyDataEx : public MyData {
public:
    MyDataEx() {
        cout << "MyDataEx()" << endl;
        m_pnData = new int;
    }

    ~MyDataEx() {
        cout << "~MyDataEx()" << endl;
        delete m_pnData;
    }

private:
    int *m_pnData;
};

int main() {
    /** 추상자료형으로 접근을 한다. */
    MyData *pData = new MyDataEx();
    /** 파생 클래스의 소멸자와 기본 클래스의 소멸자를 호출 해준다. -> 기본 클래스의 소멸자가 virtual 이 되어 있으므로 호출이된다.*/
    delete pData;
    return 0;
}