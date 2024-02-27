#include <iostream>

using namespace std;

/** 가상 함수의 구현부가 없으므로 순수 가상 이다. -> 보텅 행위에 대한 함수만 정의되어 있다. */
class MyInterface {
public:
    MyInterface() {
        cout << "MyInterface()" << endl;
    }

    virtual int getData() const = 0;

    virtual void setData(const int data) = 0;

    virtual ~MyInterface() {
        cout << "~MyInterface()" << endl;
    }
};

/** 순수 가상 함수를 파생 클래스에서 반드시 재정의 해야한다. */
class MyData : public MyInterface {
public:
    MyData() {
        cout << "MyData()" << endl;
    }

    ~MyData() {
        cout << "~MyData()" << endl;
    }

    int getData() const {
        return this->m_nData;
    }

    void setData(const int data) {
        this->m_nData = data;
    }

    /** MyData 에 대한 형 선언  */
    operator int() {
        return this->m_nData;
    }

private:
    int m_nData = 0;
};

int main() {
    /** 순수 가상 함수에 대한 인스턴스 선언은 실행이 되지 않는다. */
//    MyInterface interface;
    MyData a;
    a.setData(5);
    cout << a.getData() << endl;

    return 0;
}