#include <iostream>

using namespace std;

class MyData {
public:
    MyData(int data) : data(data) {

    }

    void printData() {
        /** aata 를 출력하는 방법 4 가지 */
        cout << "control call - " << data << endl;
        /** 이 부분에서는 정적인지 정적이 아닌지를 따지게 된다. */
        cout << "control call - " << MyData::data << endl;
        /** this 는 인스턴스의 자기 자신의 주소를 가르킨다. */
        cout << "control call - " << this->data << endl;
        cout << "control call - " << this->MyData::data << endl;
    }

private:
    int data;
};

/** 제작자 관점 -> 시점이 과거이다. */
class MethodTest {
public:
    /** data 의 초기 값을 0으로 초기화를 해준다. */
    MethodTest() : data(0) {}

    const int getData() {
        return data;
    }

    void setData(int data) {
        this->data = data;
    }

private:
    int data;
};

/** 사용자 코드 */
int main() {
    MyData myData = MyData(10);
    myData.printData();
    /** 사용자 관점 -> 시점이 미래이다. */
    MethodTest methodTest = MethodTest();
    /** 이와 같은 코드로 기계어로 변역 시 주소 값을 넘겨준다. */
//    methodTest.setData(&methodTest,15);
    methodTest.setData(15);
    cout << methodTest.getData() << endl;
    return 0;
}