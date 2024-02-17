#include <iostream>

using namespace std;

int data = 200;

namespace Test {
    int data = 100;

    void testFunc() {
        /** 여기서 가르키느 data 는 현재블록 범위 안에 있는 식별자 우선순위로 인한 Test::data 를 가르키게 된다. */
        cout << data << endl;
        /** 만약 global namespace 의 값을 출력하기 위해서 ::data 로 해줘야한다. */
        cout << ::data << endl;
    }
}

int main() {
    Test::testFunc();
    /** 같은 global namespace 를 이용 해도 모호함을 없애기 위해 ::를 사용하면 가독성 및 모호함이 없어지므로 사용하는 것이 좋다. */
    cout << ::data << endl;
    return 0;
}