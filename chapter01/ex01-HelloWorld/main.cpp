/** 표준명 헤더일 경우 .h 가 생략된 헤더도 있다. */
#include <iostream>

int main(int argc, char **argv) {
    /** << bit shift 연산의 역활만 하는 것이 아니라 cout 에 redirect 해준다는 의미로 사용이 된다. */
    /** endl 의 기능은 \r\n만 있는 것이 아니라 fflush()의 역활을 해준다. -> 출력 conssole 에 대한 buffer 를 비워주는 역활도 한다. */
    std::cout << "Hello World!" << std::endl;
    return 0;
}