#include <iostream>

/** default parameter 를 이용한 함수 */
int testFunction(int param = 10) {
    return param;
}

/** default parameter 를 이용한 함수 -> default 값은 오른쪽부터 선언을 해줘야한다.(parameter 가 stack 에 쌓이는 것은 오른쪽부터 값이 있기 떄문이다. c 언어에서도 해당되는 동일하다.) */
int testParameter(int param1, int param2 = 2) {
    return (param1 * param2);
}

int main(int argc, char **argv) {
    std::cout << testFunction() << std::endl;
    std::cout << testParameter(10) << std::endl;
    std::cout << testParameter(10, 5) << std::endl;
    return 0;
}