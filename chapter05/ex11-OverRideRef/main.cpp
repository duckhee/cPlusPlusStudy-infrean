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

    void setData(const int data) {
        this->nData = data;
    }

    int getData() const {
        return this->nData;
    }

protected:
    void printData() {
        cout << "TestPrint" << endl;
    }

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

    /** setData 에 대한 재정의 -> override */
    void setData(const int data) {
        if (data < 0) {
            /** 기본 클래스에 대한 소속을 확실히 해주어야 된다. -> 아니면 자기 자신의 함수로 불리기 때문이다. */
            MyData::setData(0);
        }
        if (data > 10) {
            /** 명시적으로 기본 클래스의 함수를 호출한다. -> 명시를 하지 않으면 현재 클래스의 함수를 호출하므로 재귀형태가 된다. */
            MyData::setData(10);
        }
    }

    void testFunc() {
        printData();
        setData(5);
        cout << this->getData() << endl;
    }
};

int main() {
    MyDataEx a;
    MyDataEx &rData = a;

    rData.setData(15);
    cout << rData.getData() << endl;

    /** 일반 메서드의 경우 참조형식에 따라 호출이 된다. -> pointer 접근, reference 접근 동일하게 참조 형식이다. */
    MyData &refData = a;
    /** MyData 의 setData 가 호출이 된다. */
    refData.setData(15);
    cout << refData.getData() << endl;
    /** pointer 변수로 참조 접근 */
    MyData *pData = &a;
    pData->setData(20);
    cout << pData->getData() << endl;
    return 0;
}