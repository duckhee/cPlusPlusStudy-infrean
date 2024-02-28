#include <iostream>

using namespace std;

class MyData {
public:
    MyData() {
        cout << "MyData()" << endl;
    }

    ~MyData() {
        cout << "MyData()" << endl;
    }

    void setData(const int data) {
        this->data = data;
    }

    int getData() const {
        return this->data;
    }

private:
    int data = 0;
};

/** pointer 를 선언하는 것보단 참조 형식으로 선언하는 것이 좋다. -> 참조를 사용할 때는 가급적 const 를 붙여서 사용을 하는 것이 좋다. */
void testFunc(const MyData &myData) {
    /** const_cast<> 를 이용해서 상수화 제거 형 변환 -> const 를 우회해서 접근해 값을 변경하는 방법이다. */
    MyData &data = const_cast<MyData &>(myData);
    cout << data.getData() << endl;
    data.setData(10);
}

int main() {
    MyData data;
    data.setData(5);
    testFunc(data);
    cout << "Main function call" << endl;
    cout << data.getData() << endl;
    return 0;
}
