#include <iostream>

using namespace std;

class MyData {
public:
    /** 변환 생성자 -> 매개변수를 하나 가지고 있는 생성자를 의미한다. */
    MyData(int param) : nData(param) {
        cout << "MyData(int)" << endl;
    }

    /** 복사 생성자 -> 임시 객체를 생성하지 않도록 하기 위해서는 explicit 를 써줘야한다. */
    MyData(const MyData &rhs) : nData(rhs.nData) {
        cout << "MyData(const MyData&)" << endl;
    }

    /** +에 대한 operator 재정의 */
    MyData operator+(const MyData &rhs) const {
        cout << "operator+" << endl;
        MyData retVal(0);
        retVal.nData = this->nData + rhs.nData;
        return retVal;
    }

    /** 대입 연산자 재정의 */
    /** 반드시 현재 가르키는 instance 를 반환하도록 해주는 것이 좋다. -> this pointer 를 반환을 해주는 참조자를 반환 해줘야한다. (이렇게 instance를 반환을 해줘야 연산자 중첩에서 발생하는 이슈를 피할 수 있다.) */
    MyData &operator=(const MyData &rhs) {
//    void operator=(const MyData &rhs) {
        cout << "operator=" << endl;
        nData = rhs.nData;
        return *this;
    }

    int getData() const {
        return this->nData;
    }

private:
    int nData;
};

/** 전역 함수로 instance 연산에 대해서 operator + 에 대해서 정의한다. */
/** 일반 형식이 왼쪽인 경우에는 반드시 전역 함수를 만들어서 over loading을 해줘야한다. */
MyData operator+(int left, MyData &rhs) {
    MyData data(left + rhs.getData());
    return data;
}

int main() {
    cout << "******* begin *******" << endl;
    MyData a(0), b(3), c(4);
    a = b + c;

    /** a = b + c 와 같은 코드이다.  */
    a.operator=(b.operator+(c));
    cout << a.getData() << endl;
    /** 전역 함수로 해당 operator+에 대해 over loading 했기 때문에 사용이 가능하다. */
    a = 4 + b;
    cout << a.getData() << endl;
    /** class 에서 operator+ 를 정의해 주었기 때문에 사용이 가능 하다. */
    a = b + 4;
//    a.operator=(b.operator+(4));
    cout << a.getData() << endl;
    cout << "******* end *******" << endl;
    return 0;
}