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

    int getData() const {
        return this->nData;
    }

    void setData(const int data) {
        this->nData = data;
    }
/** 상속 관계에서 접근이 가능하다. */
protected:
    void printData() {

    }

/** 파생 클래스일지라도 private 에 대한 접근이 불가능하다. */
private:
    int nData = 0;
};

class MyDataEx : public MyData {
public:
    MyDataEx() {
        cout << "MyDataEx()" << endl;
    }

    ~MyDataEx() {
        cout << "~MyDataEx()" << endl;
    }

    void testFunc() {
        /** 다음과 같이 접근이 가능하다. -> 소속에 대해서 선언 하는 방식이다. */
        MyData::printData();
        setData(5);
        cout << this->getData() << endl;
    }
};

int main() {
    MyDataEx data;
    data.setData(10);
    cout << data.getData() << endl;
    data.testFunc();
    /** 파생 형식을 기본 형식으로 참조하는 경우도 있다. -> 추상 자료형에 대한 접근이다. */
    MyData *pData = new MyDataEx;
    /** 추상 자료형으로 접근 하면, 파생형식을 접근에 기능에 접근이 안된다. */
//    pData->testFunc();
    /** 현재는 단순 참조하는 역활이므로 메모리 해제를 해주지 않아도 된다. shallow copy 형태이다. */
//    MyData *pData = &data;
    cout << pData->getData() << endl;
    delete pData;
    /** 기본 형식으로 참조하는 것도 포인터 처럼 접근이 가능하다. */
    MyDataEx extData;
    /** 기본 형식에 대한 reference 참조 */
    MyData &rData = extData;
    rData.getData();
    return 0;
}