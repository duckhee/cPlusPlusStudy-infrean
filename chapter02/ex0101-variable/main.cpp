#include <iostream>

int main() {
    /** c++ 언어 style의 동적 할당 */
    int *pData = new int;
    /** c 언어 style의 동적 할당 */
    int *pcData = (int *) malloc(sizeof(int));
    /** c++ 언어 style의 동적 할당 */
    int *pNewData = new int(10);
    /** c 언어 style의 동적 할당 */
    int *pcNewData = (int *) malloc(sizeof(int));
    /** c 언어 style의 동적 할당 후 초기화 */
    *pcNewData = 10;
    /** pointer 를 이용해서 값의 초기화 -> 간접 지정 */
    *pData = 5;
    /** pointer 를 이용해서 값의 초기화 -> 간접 지정 */
    *pcData = 5;
    /** 변수의 값을 출력 */
    std::cout << "(c++)pData - " << *pData << std::endl;
    std::cout << "(c++)pNewData - " << *pNewData << std::endl;
    /** 변수의 값을 출력 */
    printf("(c)pcData - %d\r\n", *pcData);
    printf("(c)pcNewData - %d\r\n", *pcNewData);
    /** c++ 언어 style의 메모리 해제 */
    delete pData;
    delete pNewData;
    /** c 언어 style의 메모리 해제 */
    free(pcData);
    free(pcNewData);
    

    return 0;
}