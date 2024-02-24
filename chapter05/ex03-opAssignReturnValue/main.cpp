#include <iostream>

using namespace std;

class MyData {
public:
    MyData(int param) {
        cout << "MyData()" << endl;
        pData = new int(param);
    }

    ~MyData() {
        delete pData;
    }

    operator int() {
        return *pData;
    }

    /** 참조값을 반환하도록 해줘야 다시 매개변수로 들어올 수 있다. */
    MyData &operator=(const MyData &rhs) {
        delete pData;
        pData = new int(*rhs.pData);
        return *this;
    }

    /** r-value 에 대한 이동 시멘틱 정의 */
    MyData &operator=(MyData &&rhs) {
        cout << "operator=(MyData&&)" << endl;
        pData = rhs.pData;
        rhs.pData = nullptr;
        /** pointer 변수를 반환 */
        return *this;
    }

    /** 복합 단순 대입 연산자 정의 */
    MyData &operator+=(const MyData &rhs) {
        int result = *pData;
        result += *rhs.pData;
        delete pData;
        pData = new int(result);
        /** pointer 로 자기 자신에 대한 참조 값 반환 */
        return *this;
    }

private:
    int *pData = nullptr;
};

int main() {
    MyData a(0), b(3), c(5);
    a = b = 10;
    a.operator=(b.operator=(10));
    cout << a << endl;
    cout << b << endl;
    a += b;
    cout << a << endl;
    return 0;
}