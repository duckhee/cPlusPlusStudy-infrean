#include <iostream>


int main(int argc, char **argv) {
    /** 정수형 값을 입력 받는 방법 */
    int age;
    std::cout << "나이를 입력 하세요 : ";
    std::cin >> age;
    /** 문자열에 대한 입력을 바든 방법 */
    char job[32];
    std::cout << "직업을 입력 하세요 : ";
    std::cin >> job;
    /** 문자열에 대한 입력을 바든 방법 */
    std::string name;
    std::cout << "이름을 입력 하세요 : ";
    std::cin >> name;

    std::cout << "당신의 이름은 " << name << "이고, " << "나이는 " << age << "살 이며 " << "직업은 " << job << " 입니다." << std::endl;
    return 0;
}