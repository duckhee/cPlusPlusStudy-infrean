#include <iostream>

using namespace std;

class TestData {
public:
    /** 매개변수를 가지고 있는 생성자를 변환 생성자라고 한다. */
//    TestData(int nParam) : nData(nParam) {
//        cout << "TestData(int)" << endl;
//    }
    /** 묵시적으로 임시 객체가 생성되지 않도록 막아주는 키워드 -> explicit 를 사용하면 변환 생성자를 통해서 묵시적 임시객체가 생성되지 않도록 해준다. */
    explicit TestData(int nParam) : nData(nParam) {
        cout << "TestData(int)" << endl;
    }

    TestData(const TestData &rhs) {
        cout << "TestData(const TestData&)" << endl;
    }

    ~TestData() {
        cout << "~TestData()" << endl;
    }

    void setData(const int data) {
        this->nData = data;
    }

    int getData() const {
        return this->nData;
    }

    /** class 에 대한 직렬화를 지원하기 위해서 operator 를 재정의를 해준다. -> 형 변환 연산자를 재정의한 것이다. */
    operator int(void) {
        return this->nData;
    }

private:
    int nData = 0;
};


/** instance 에 대한 참조를 한다. */
/** 이름이 없는 임시 객체도 받을 수 있다. -> 변환 생성자로 생성이 될 수 있으면 해당 되는 자료형의 값이 와도 함수가 호출이 된다. */
void testFunc(const TestData &param) {
    cout << "TestFunc() : " << param.getData() << endl;
}

int main() {
    /** 이름이 없는 객체를 생성한다.*/
//    TestData(10);
    /** 변환 생성자를 호출되어 임시 객체를 생성한다. */
//    testFunc(5);
    testFunc(TestData(5));
    TestData a(10);
    /** operator 를 통해 형에 대한 재 정의를 해주어서 직렬화된 데이터를 출력할 수 있다. */
    cout << a << endl;
    return 0;
}