#include <iostream>

int main() {
    int list[] = {10, 20, 30, 40, 50};

    /** c style for loop */
    for (int i = 0; i < 5; ++i) {
        std::cout << list[i] << ' ';

    }
    std::cout << std::endl;

    /** java iterator 사용법과 동일한 c++ 반복문 */
    /** 여기서는 값을 참조하는 것이므로 loop 안에서 값을 변경해도 적용이 안된다. */
    for (const auto element: list) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    for (auto element: list) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    /** 자료형을 정의 해주는 것 */
    for (int element: list) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    for (const auto &element: list) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    return 0;
}