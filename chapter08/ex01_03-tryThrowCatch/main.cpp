#include <iostream>

using namespace std;

int main() {
    int a = 100, b;
    cin >> b;
    try {
        if (b == 0) {
            throw b;
        }
        cout << a / b << endl;
    } catch (int nExp) {
        cout << "ERROR: " << nExp << "으로 나눌 수 없습니다." << endl;
    }
    return 0;
}