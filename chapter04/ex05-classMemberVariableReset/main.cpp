#include <iostream>

using namespace std;

class Test {
public:
    /** 생성자를 이용한 멤버 변수에 대한 초기화 방법 */
    Test() {
        data = 10;
    }

    int data;

    void printData() {
        cout << data << endl;
    }
};

class TestData {
public:

    /** 생성자를 이용한 멤버 변수에 대한 초기화 방법 */
    TestData() : data1(10), data2(20) {
        /** 여기서 대입을 통해서 값을 넣어주면 가장 우선 순위를 가진다. -> 함수 내부의 코드를 이용한 초기화가 가장 우선 순위를 가진다. */
        data2 = 100;
    }

    int data1;
    /** 생성자에서 초기화 되는 코드가 있으면 해당 코드가 우선 순위이다. */
    int data2 = 30;

    void printData() {
        cout << "data1 = " << data1 << ", data2 = " << data2 << endl;
    }
};

class TestDataInit {
public:
    TestDataInit() {}

    int data1 = 10;
    int data2 = 20;

    void printData() {
        cout << "data1 = " << data1 << ", data2 = " << data2 << endl;
    }
};

class PointerVariable {
private:
    /** 참조자는 선언과 동시에 초기화가 되어야한다. */
    int &data;
public:
    /** 기본 생성자를 삭제하기 위해서 다음과 같이 사용하기도 한다. */
//    PointerVariable() = delete;
    /** 기본 생성자를 호출 했을 때 에러를 발생 시키지 않게 위해서 사용하는 방법이다. */
    PointerVariable() = default;
    /** 매개변수로 참조자를 받아서 무조건 초기화를 해줘야한다. */
    /** 이경우에 함수 scope 안에서 초기화 하는 것은 불가능하므로 해당 방법 밖에는 방법이 없다. */
    /** 다음과 같이 매개변수를 받는 생성자 하나만 있을 경우 매개변수를 받지 않는 생성자는 사라지게 된다. */
    PointerVariable(int &data) : data(data) {}

    int getData() {
        return data;
    }
};

int main() {
    Test test;
    TestData test2;
    TestDataInit test3;
    test.printData();
    test2.printData();
    test3.printData();
    int data = 10;
    PointerVariable pointerVariable(data);
    return 0;
}