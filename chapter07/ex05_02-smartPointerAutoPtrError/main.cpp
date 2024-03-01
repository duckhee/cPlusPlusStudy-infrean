#include <iostream>

using namespace std;

class CMyData {
public:
    CMyData() { cout << "CMyData()" << endl; }

    ~CMyData() { cout << "~CMyData()" << endl; }

    void TestFunc() { cout << "CMyData::TestFunc()" << endl; }
};

int main() {
    /** auto_ptr 은 코드에서 대입 연산이 나오면 코드에 대해서 확인을 필수적으로 해야한다. -> 이동 대입을 하므로 */
    /** 단순하게 포인터에 대한 해제를 해주기 위해서 사용이 된다. -> 배열 포인터인 경우는 예외이다. */
    auto_ptr<CMyData> ptrTest(new CMyData);
    auto_ptr<CMyData> ptrNew;
    /** 해당 포인터의 주소 값을 가져오는 함수는 get() 함수이다. -> auto_ptr을 지워주는 함수는 reset()이다. */
    cout << "0x" << ptrTest.get() << endl;

    // 포인터를 대입하면 원본 포인터는 NULL이 된다.
    ptrNew = ptrTest;
    cout << "0x" << ptrTest.get() << endl;

    // 따라서 이 코드를 실행할 수 없다.
//    ptrTest->TestFunc();
    /** 배열에 대한 메모리 해제를 다 해주지 않는다. */
//    auto_ptr<CMyData> arrayPtr(new CMyData[3]);
    return 0;
}
