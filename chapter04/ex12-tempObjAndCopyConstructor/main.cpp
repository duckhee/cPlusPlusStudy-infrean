#include <iostream>

using namespace std;

class TestData {
public:
    /** 생성자에 매개변수 하나만 있는 경우에는 변환 생성자라고 말한다. */
    /** 변환 생성자를 사용할 때 객체의 life cycle 에 영향을 줄 수 있는 경우가 있으므로 잘 파악하고 사용하는 것이 좋다. */
    TestData(const int data) : nData(data) {
        cout << "TestData(int)" << endl;
    }

    /** 복사 생성자 */
    TestData(const TestData &rhs) : nData(rhs.nData) {
        cout << "TestData(const TestData&)" << endl;
    }

    ~TestData() {
        cout << "~TestData(" << nData << ")" << endl;
    }

    int getData() const {
        return nData;
    }

    void setData(const int data) {
        nData = data;
    }

    /** chain 형태로 설정이 가능 하도록 자기 자신에 대한 instance 주소를 반환하는 형식이다. */
    TestData set(const int data) {
        nData = data;
        return *this;
    }

private:
    int nData = 0;
};

/** 여기서 인자로 받은 객체가 return 하는 변수가 생성될 때 까지는 살아 있다. */
TestData testFunc(TestData rhs) {
    cout << "testFunc()" << endl;
    rhs.setData(20);
    /** 임시 객체를 생성한다. -> 객체를 복사해서 전달 해준다.*/
    return rhs;
}

TestData testFuncUsingReference(TestData &rhs) {
    cout << "testFuncUsingReference()" << endl;
    rhs.setData(20);
    return rhs;
}

TestData testFuncUsingReferenceReadOnly(const TestData &rhs) {
    cout << "testFuncUsingReference()" << endl;
    cout << "testFuncUsingReferenceReadOnly() : rhs nData = " << rhs.getData() << endl;
    return rhs;
}

int main() {
    /** 변환 생성자를 통해서 임시 객체를 생성 -> 임시 객체의 life cycle 은 testFunc 함수 내부의 scope이다. */
    TestData result = testFunc(10);
    /** 다음과 같이 임시 객체를 선언해서 사용을 하면 main 함수가 종료가 되면 반환이 된다. */
    result.setData(100);
    /** chain 형식으로 객체에 값 변경 및 추가 Method 호출 */
    cout << result.set(20).getData() << endl;
//    testFunc(30).setData(200);
    /** 참조자를 이용해서 함수의 매개변수를 받는 것이 좋다. -> 임시 객체를 넘겨줄 수 없다. */
//    TestData result1 = testFuncUsingReference(TestData(10));
    /** 함수 안에서 read only 만 할 경우 임시 객체를 넣어줄 수 있다. */
    testFuncUsingReferenceReadOnly(TestData(10));
    testFuncUsingReferenceReadOnly(10);
//    testFunc(10).setData(100);
    cout << "End of main()" << endl;
    return 0;
}