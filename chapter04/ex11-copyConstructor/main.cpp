#include <iostream>

using namespace std;

class MyData {
public:
    MyData() {
        cout << "MyData()" << endl;
    }

    /** 복사 생성자 */
    MyData(MyData &rhs) : pData(rhs.pData) {
        cout << "MyData(MyData &rhs)" << endl;
    }

    void setData(const int data) {
        this->pData = data;
    }

     int getData() const {
        return this->pData;
    }

private:
    int pData = 0;
};

int main() {
    MyData myData;
    myData.setData(10);
    /** 복사 생성자를 이용해서 객체 생성 */
    MyData copyData(myData);
    cout << copyData.getData() << endl;
    return 0;
}