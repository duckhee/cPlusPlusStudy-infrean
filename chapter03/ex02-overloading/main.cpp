#include <iostream>

void testFunction(int a) {
    std::cout << "testFunction(int)" << std::endl;
}

/** 다중 정의가 되어 있는 형태이다. */
void testFunction(int a, int b = 10) {
    std::cout << "testFunction(int, int)" << std::endl;
}

int main(int argc, char **argv) {
    /** 현재 상태는 두가지 함수에 대한 모두 해당이 되므로 컴파일러가 오류가 난다.*/
//    testFunction(5);
    return 0;
}