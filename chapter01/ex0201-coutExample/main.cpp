#include <iostream>

int main(int argc, char **argv) {
    /** int 형 출력 -> 추상화가 되어 있어서 어떤 값이 들어오든 형식 지정자를 생각 안해도 된다. */
    std::cout << 10 << std::endl;
    /** unsigned int 형 출력 -> 추상화가 되어 있어서 어떤 값이 들어오든 형식 지정자를 생각 안해도 된다. */
    std::cout << 10u << std::endl;
    /** float 형 출력 -> 추상화가 되어 있어서 어떤 값이 들어오든 형식 지정자를 생각 안해도 된다. */
    std::cout << 10.5f << std::endl;
    /** dobule 형 출력 -> 추상화가 되어 있어서 어떤 값이 들어오든 형식 지정자를 생각 안해도 된다. */
    std::cout << 10.5 << std::endl;
    /** 정수 연산의 결과 출력 -> 추상화가 되어 있어서 어떤 값이 들어오든 형식 지정자를 생각 안해도 된다. */
    std::cout << 3 + 4 << std::endl;
    /** 문자열 변수 선언 */
    std::string strData = "Testing string";
    /** const char 형인 임시 문자열 값 출력 */
    std::cout << "Sample string" << std::endl;
    /** 문자열 출력 */
    std::cout << strData << std::endl;
    /** 문자열에 대한 재 할당 -> 메모리 크기를 자동으로 줄여준다. */
    strData = "New String";
    /** 문자열 변수 출력 */
    std::cout << strData << std::endl;
    /** 문자열과 정수형 섞어서 출력 -> stream 해서 데이터를 출력 하는 형태 (serialization) */
    std::cout << "저는 " << 20 << "살" << " 입니다." << std::endl;

    return 0;
}