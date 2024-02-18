#include <iostream>

using namespace std;

class UserData {
    /** 접근 지시자 public, private */
public:
    int age;
    char name[32];

    void print() {
        cout << age << ", " << name << endl;
    }
};

int main() {
    UserData user = {10, "Hoon"};
    user.print();
    return 0;
}