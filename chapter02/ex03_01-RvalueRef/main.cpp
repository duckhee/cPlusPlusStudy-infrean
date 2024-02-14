#include <iostream>

int testFunc(int param) {
    int result = param * 2;
    return result;
}

int main(int argc, char **argv) {
    int input = 0;
    std::cout << "Input number : ";
    std::cin >> input;
    /** 임시 객체를 저장하기 위한 변수 선언 -> c 언어일 경우, 새로 할당을 하거나 값을 복사해서 사용 혹은 pointer 로 값을 받아서 재 할당하는 형식으로 사용 했음 */
    int &&rData = input + 5;
    std::cout << rData << std::endl;

    int &&result = testFunc(rData);
    result += 10;
    std::cout << result << std::endl;

    return 0;
}