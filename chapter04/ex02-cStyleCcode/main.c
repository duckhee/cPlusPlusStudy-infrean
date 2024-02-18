#include <stdio.h>


typedef struct _UserData {
    int age;
    char name[32];

    /** 함수 포인터 변수를 이용한 함수를 담기 위한 구조체에 멤버 */
    void (*printData)(struct _UserData *pUser);
} UserData;

/** 함수 정의 -> 자료 구조에 대한 강력한 의존성을 가지고 있다. */
void printData(UserData *pUser) {
    printf("%d, %s\r\n", pUser->age, pUser->name);
}

int main(int argc, char **argv) {
    /** 자료형 구조체애 대해 선언 및 정의 */
    UserData cUser = {10, "Hoon", printData};
    /** 함수 포인터 변수이므로 함수 호출 연산의 피연산자가 될 수 있다. -> 여기서는 cUser */
    /** 다음과 같이 자기 자신이 함수를 사용하는데 자기 자신에 대한 주소값을 넘겨주는 것을 c++ 언어에서는 this 를 이용해서 사용한다. -> this pointer 는 현재 시점에서 미래 시점의 인스턴스 주소를 가르키는 포인터이다. */
    cUser.printData(&cUser);
    return 0;
}