#include <iostream>

using namespace std;

class MyData {
public:
    MyData(const int data) {
        /** 포인터 변수로 int 형의 변수 선언 */
        pData = new int;
        /** 간접 지정을 통해서 값을 대입 */
        *pData = data;
    }

    /** 소멸할 때 포인터 변수의 값을 삭제 해주도록 하는 것 */
    ~MyData() {
        delete pData;
    }

    /** 정의를 해두지 않으면 값 복사를 이용해서 객체가 생성이 된다. -> 이 경우 기본 값이 shallow copy 이므로 객체 값의 포인터 변수의 주소값을 공유하는 형태가 된다. */
    /** 객체를 받아서 class instance 생성 시 deep copy 해주는 생성자 */
    MyData(const MyData &rhs) {
        /** 동적으로 메모리를 생성해주는 것이다.*/
        pData = new int;
        /** 간접 지정을 통해서 값을 대입을 해주면 해당 값이 deep copy 를 해준다.*/
        *pData = *rhs.pData;
    }

    int getData() const {
        if (pData) {
            /** 간접 지저을 통해서 해당 값을 가져오기 */
            return *pData;
        }
        return 0;
    }

private:
    int *pData = nullptr;
};

int main() {
    MyData a(10);
    /** 복사 생성자를 통해 생성 */
    MyData b(a);
    cout << a.getData() << endl;
    cout << b.getData() << endl;
    return 0;
}