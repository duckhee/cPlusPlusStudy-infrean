#include <stdio.h>

void swap(int *pA, int *pB);


int main() {
    int data = 10;
    /** pointer 를 이용한 참조 -> c++ 의 &는 참조를 의미(call by reference) 하지만 c 언어에서는 주소 값을 의미한다. -> C 언어에서는 참조만 있고, call by reference 라는 의미는 없는 것이 맞다. */
    int *ref = &data;
    int **dRef = &ref;
    int **dpRef = &ref;
    /** pointer 를 이용한 값 swap */
    int x = 10, y = 20;
    *ref = 20;
    printf("%d - p %d dp - %d ddp - %d\r\n", data, *ref, **dRef, **dpRef);
    **dRef = 30;
    printf("%d - p %d dp - %d ddp - %d\r\n", data, *ref, **dRef, **dpRef);
    **dpRef = 40;
    printf("%d - p %d dp - %d ddp - %d\r\n", data, *ref, **dRef, **dpRef);
    /** swap 하기 전에 출력 */
    printf("[before] x : %d, y : %d\r\n", x, y);
    /** swap 을 하는 함수 */
    swap(&x, &y);
    printf("[after] x : %d, y : %d\r\n", x, y);
    return 0;
}

void swap(int *pA, int *pB) {
    int pTemp = *pA;
    *pA = *pB;
    *pB = pTemp;
}

