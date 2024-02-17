#include <iostream>

/** standard namespace 를 사용하겠다는 의미이다. -> std는 표준 라이브러리를 나타낸다. */
using namespace std;

/** global namespace 를 생성하는 방법 */
void testFunc() {
    cout << "globalNamespace::testFunc()" << endl;
}

int nData = 300;

/** namespace 를 생성허는 방법 */
namespace Test {
    int nData = 100;

    void testFunc() {
        cout << "Test::testFunc()" << endl;
    }
}

int main() {
    /** 특정 namespace 를 사용하는 방법 */
    Test::testFunc();

    /** global namespace 를 사용하는 방법 */
    cout << "global namespace : " << ::nData << endl;
    cout << "global namespace : " << nData << endl;
    /** 특정 namespace 의 값을 사용하는 방법 */
    cout << "Test namespace : " << Test::nData << endl;

    return 0;
}