#include <iostream>

using namespace std;

int main() {
    int a = 100;
    int b;
    cin >> b;
    if (b != 0) {
        cout << a / b << endl;
    } else {
        cout << "ERROR: 0으로 나눌 수 없습니다." << endl;
        return -1;
    }
    return 0;
}