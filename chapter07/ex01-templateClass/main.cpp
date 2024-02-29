#include <iostream>

using namespace std;

/** class template 선언 */
template<typename T>
class MyData {
public:
    MyData(T param) : data(param) {
    }

    T getData() const {
        return this->data;
    }

    operator T() { return data; }

    void setData(T param) {
        this->data = param;
    }

private:
    T data;
};

class TestData {
public:
    TestData(int param) {
        cout << "TestData" << endl;
    }

    operator char *() const {
        return "TestData";
    }
};

int main() {
    /** template class 사용 -> 사용하는 시점에 컴파일이 일어난다. */
    /** 사용하지 않으면, 코드를 생성하지 않는다. */
    MyData<int> a(5);
    cout << a << endl;
    MyData<double> b(123.45);
    cout << b << endl;
    /** 특정 클래스에 대해서 class template 형식으로 입력을 받을 수 있다. */
    MyData<TestData> c(15);
    /** class 에 대한 형에 대한 operator 정의를 해주어야한다. */
    cout << c.getData() << endl;
    return 0;
}