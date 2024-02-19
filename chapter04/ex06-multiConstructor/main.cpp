#include <iostream>

using namespace std;

/** class 선언 */
class MyData {
public:
    /** 생성자 정의 -> 명시적 호출에 의해서 호출이 되는 함수가 아니다. 반환 자료가 없다 */
    /** 생성자의 역활은 멤버 초기화 코드와 실패할 가능성이 없는 코드만 있는 것이 좋다.  */
    MyData(int nParam) : nData(nParam) {}

    MyData(int x, int y) : nData(x + y) {}

    /** Method 이다 -> class 의 함수를 의미 한다. */
    int getData() {
        return nData;
    }
/** 외부 접근이 불가능 하다.*/
private:
    int nData;
};

class MyPoint {
public:
    MyPoint(int x) {
        cout << "MyPoint(int)" << endl;
        if (x > 100)
            x = 100;
        /** 생성한 instance 의 x를 가르킬 때, this 를 이요해서 사용이 가능하다. (클래스 내부에서 사용) */
        this->x = x;
    }

    /** 생성자를 위임해서 매개변수 하나를 받는 생성자를 호출 하는 것이다. */
    MyPoint(int x, int y) : MyPoint(x) {
        cout << "MyPoint(int, int)" << endl;
        if (y > 200)
            y = 200;
        this->y = y;
    }

    void print() {
        cout << "x = " << x << ", y = " << y << endl;
    }

private:
    int x = 0;
    int y = 0;
};

class Test {
public:
    /** 명시적으로 default 생성자를 선언 하는 방법 */
    Test();
//    Test() = default;
//    Test() = delete;
};
int main() {
    /** 인스턴스 생성 시에 호출되는 생성자는 하나 밖에 없다.*/
    MyData a(10);
    MyData b(3, 4);
    /** compile time 에 inline 함수로 최적화가 된다. */
    cout << a.getData() << endl;
    cout << b.getData() << endl;
    MyPoint begin(110);
    MyPoint end(50, 250);
    begin.print();
    end.print();
    return 0;
}
