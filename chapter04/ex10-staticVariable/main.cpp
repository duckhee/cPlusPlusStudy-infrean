#include <iostream>

using namespace std;

class Test {
public:
    Test(int data) : nData(data) {
        nCount++;
    }

    int getData() const {
        return this->nData;
    }

    void resetCounter() {
        nCount = 0;
    }

    /** this 에 대한 접근이 불가능하다. -> instance 에 접근이 불가능하기 때문이다. */
    static int getCounter() {
        return nCount;
    }

private:
    int nData;
    static int nCount;
};

/** 정적 멤버를 선언하면 정의에 대한 부분을 따로 분리 해야한다. */
/** 정적 멤버에 대한 초기화 */
int Test::nCount = 0;

int main() {
    Test a(5), b(10);
    cout << "static nCount : " << a.getCounter() << endl;
    cout << "a.getData() = " << a.getData() << endl;
    cout << "b.getData() = " << b.getData() << endl;
    cout << "static getCounter() : " << Test::getCounter() << endl;
    b.resetCounter();
    /** instance 없이도 호출이 가능하다. */
    cout << "static getCounter() : " << Test::getCounter() << endl;

    return 0;
}