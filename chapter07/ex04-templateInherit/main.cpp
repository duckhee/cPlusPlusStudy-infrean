#include <iostream>

using namespace std;

template<typename T>
class MyData {
public:
    MyData() = default;

    virtual ~MyData() = default;

protected:
    T data;
};

/** template 상속 시 기본 클래스에 있는 값을 접근할 때는 항상 this 를 이용해서 접근을 해야한다. */
template<typename T>
class MyDataEx : public MyData<T> {
public:
    MyDataEx() {

    }

    ~MyDataEx() {

    }

    void setData(const T param) {
        this->data = param;
    }

    T getData() const {
        /** this로 접근을 하지 않으면, compile 에러가 발생한다. */
        return this->data;
    }
};

int main() {
    MyDataEx<int> a;
    a.setData(15);
    cout << a.getData() << endl;
    return 0;
}