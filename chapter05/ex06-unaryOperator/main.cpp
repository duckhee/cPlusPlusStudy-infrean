#include <iostream>

using namespace std;

class MyData {
public:
    MyData(int data) : nData(data) {}

    /** MyData 의 형 재정의 */
    operator int() {
        return this->nData;
    }

    /** 단항 증가 전위 표현식 재정의 */
    int operator++() {
        cout << "operator++()" << endl;
        return ++(this->nData);
    }

    /** 단항 증가 후위 표현식 재정의 */
    int operator++(int) {
        cout << "operator++(int)" << endl;
        int temp = this->nData;
        this->nData++;
        return temp;
    }

private:
    int nData;
};

int main() {
    MyData a(10);
    cout << ++a << endl;
    /** 후위식을 재정의할 때 참조자를 반환 하는 형식으로 하면 문제가 생긴다. -> ++++++ 와 같은 연삭이 가능해지므로 참조값을 반환하는 형태는 지양해야한다. */
    cout << a++ << endl;
    cout << a << endl;
    return 0;
}