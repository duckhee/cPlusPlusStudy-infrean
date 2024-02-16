#include <iostream>

/**
 * template 함수 -> C 언어의 매크로 함수와 같다.
 * 여기서 typename으로 정의하는 T 는 자료형에 대한 generic 이다.
 * */
template<typename T>
T add(T a, T b) {
    return (a + b);
}

int main(int argc, char **argv) {
    /** 템플릿 함수를 사용하는 방법 */
    std::cout << add(3, 4) << std::endl;
    std::cout << add(3.3, 4.5) << std::endl;
    return 0;
}