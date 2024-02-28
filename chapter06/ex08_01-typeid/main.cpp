#include <iostream>

using namespace std;

class MyData {
public:
    int nDataA = 5;
};

class MyDataEx : public MyData {
public:
    int nDataB = 10;
};

int main() {
    /** 추상 자료형 형태로 선언 */
    MyData *pData = new MyDataEx();
    /** 타입에 대한 정보를 출력 하는 함수 */
    cout << typeid(pData).name() << endl;
    cout << typeid(*pData).name() << endl;

    /** 강제로 c 형 변환 -> 만약 기본 형식에 대한 값을 강제로 파생 형식으로 형 변환 시에는 값이 깨져서 나오게 된다. */
    MyDataEx *pDataEx = reinterpret_cast<MyDataEx *>(pData);
    cout << typeid(pDataEx).name() << endl;

    cout << typeid(*pDataEx).name() << endl;
    cout << pDataEx->nDataB << endl;
    /** 동적으로 메모리 할당한 객체 삭제 */
    delete pData;
    return 0;
}
