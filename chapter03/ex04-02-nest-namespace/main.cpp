#include <iostream>

using namespace std;

namespace Test {
    int nData = 100;
    /** 중첩된 namespace 선언 하는 것 */
    namespace Dev {
        int nData = 200;
        namespace Win {
            int nData = 300;
        }
    }
}

namespace Test2 {
    namespace Win {
        int nData = 400;
    }
}

/** c++17 부터 허용이 되는 문법이다. */
//namespace Test2::Tester {
//    int pData = 500;
//}

int main() {
    cout << "Test namespace pData : " << Test::nData << endl;
    /** 중첩된 namespace 의 값을 선택하는 방법 */
    cout << "Test Dev namespace pData : " << Test::Dev::nData << endl;
    cout << "Test Dev Win namespace pData : " << Test::Dev::Win::nData << endl;

    cout << "Test2 Win namespace pData : " << Test2::Win::nData << endl;
    /** c++17 부터 허용이 되는 문법 이다.  */
//    cout << "C++17 support nest namespace pData : " << Test2::Tester::pData << endl;
    return 0;
}