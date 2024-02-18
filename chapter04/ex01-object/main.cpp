#include <iostream>
#include <string>

using namespace std;

/** C 언어 style 구조체 선언 -> 객체 선언 */
typedef struct _UserData {
    int age;
    char name[32];

    /** 함수를 구조체 변수로 담는 용도 */
    void (*printUser)(_UserData *pUser);
} UserData;

/** c 언어에서 구조체에 대한 함수를 정의 하는 방법 */
void printUser(UserData *pUser) {
    printf("[c] age: %d, name : %s\r\n", pUser->age, pUser->name);
}

/** C++ style 의 구조체 */
typedef struct _cppUserData {
    /** c++ 에서는 접근 지정자를 선언해서 접근을 제어할 수 있다. */
public:
    int age;
    char name[32];

    /** c++에서는 함수를 구조체의 멤버 변수로 선언 가능하다. */
    void printUser() {
        printf("[c++] age : %d, name : %s\r\n", age, name);
    }

} CppUserData;

/** class 를 이용한 C++ 객체 생성 하는 방법 */
class User {
public:
    int age;
    char name[32];

    User(int age, char *name) {
        this->age = age;
        strcpy(this->name, name);
    }

    void userInfo() {
        cout << "[c++ class]" << "age : " << age << ", name : " << name << endl;
    }
};

int main() {
    /** c 언어 style 의 객체 생성 */
    UserData cUser = {10, "Hoon"};
    /** c 언어 style 의 객체에 함수를 등록 하는 방법 */
    cUser.printUser = printUser;
    printf("%d, %s\r\n", cUser.age, cUser.name);
    /** c 언어 style 의 함수 멤버 호출 */
    cUser.printUser(&cUser);
    /** c++ style 객체 생성 */
    User cpUser = User(5, "Chio");
    cpUser.userInfo();
    /** c++ style struct */
    CppUserData cppUser = {15, "Jang"};
    /** c++ 언어 style 의 함수 멤버 호출 */
    cppUser.printUser();
    return 0;
}