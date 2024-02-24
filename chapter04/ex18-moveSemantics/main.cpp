#include <iostream>

using namespace std;

class TestData {
public:
    /** 기본 생성자 -> pnDaa 를 동적 할당 해서 초기화 진행 */
    TestData() {
        cout << "TestData()" << endl;
        pnData = new int(0);
    }

    /** 복사 생성자 */
    TestData(const TestData &rhs) {
        cout << "TestData(TestData&)" << endl;
        /** deep copy 를 통해서 초기화 진행 */
        this->setData(rhs.getData());
    }

    /** 임시 결과로 생성된 객체를 인자로 받아서 move semantics 를 구현 */
    /** noexcept 예외를 발생 시키지 않겠다는 의미를 가지는 keyword  이다. */
    TestData(TestData &&rhs) noexcept {
        cout << "TestData(TestData&&) - move" << endl;
        delete pnData;
        /** 단순대입을 통해서 값 할당 */
        pnData = rhs.pnData;
        /** 단순대입된 원본 객체에서 삭제 시 원래 가르치던 곳을 삭제하지 못하도록 해당 값을 null 값 넣어주기 */
        rhs.pnData = nullptr;

    }

    ~TestData() {
        cout << "~TestData()" << endl;
        delete pnData;
    }

    int getData() const {
        return *(this->pnData);
    }

    void setData(int data) {
        if (this->pnData != nullptr) {
            delete pnData;
        }
        pnData = new int;
        *pnData = data;
    }

    /** 복사 생성자를 통해서 값이 대입이 되도록 하기 위한 복사 연산자 */
    void operator=(TestData &rhs) {
        cout << "operator=(TestData&)" << endl;
        setData(rhs.getData());
    }

    /** 이동 시멘틱에 대한 단순 대입 연산자 overwrite */
    TestData &operator=(TestData &&rhs) noexcept {
        cout << "&operator=(TestData&&) - move" << endl;
        delete pnData;
        pnData = rhs.pnData;
        rhs.pnData = nullptr;
        /** 자기 자신에 대한 참조 값 반환  */
        return *this;
    }

private:
    int *pnData = nullptr;
};

/** 함수가 반환 하는 과정에서 이동 생성자가 호출이 되는 것이 가장 흔한 경우이다. */
TestData getTestData(int param) {
    cout << "getTestData()" << endl;
    TestData test;
    test.setData(param);
    return test;
}

int main() {
    cout << "******* Before *******" << endl;
    /** 선언 및 정의를 한 형태이다. */
    /** 컴파잉러가 l-value 의 값을 매개변수로 넘겨주는 최적화를 이뤄지기 때문에 이동 생성에 대해 파악이 어렵다. */
    TestData t1 = getTestData(5);
    /** 이동 생성자를 호출 하기 위한 방법 -> std::move 를 이용하면 임시 객체가 생성이 된다. */
    /** 임시 객체에 대한 값이 넘어오고 해당 값 만큼 이동을 시키는 형태가 되므로 임시 객체가 생성이 된다. */
    /** 이와 같은 형태로 호출을 하면 이동 생성자가 무조건 불린다. */
    TestData t2(std::move(getTestData(10)));
    /** 명시적인 복사 생성 하는 방법 */
    TestData t3(t2);
    /** 이경우는 단순 대입 연산이다. */
    TestData result;
    result = getTestData(15);
    cout << "******* After *******" << endl;
    return 0;
}