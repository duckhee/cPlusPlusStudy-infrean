#include <stdio.h>

int testFunc(int param) {
    int result = param * 2;
    return result;
}

int main() {
    int input = 0;
    printf("Input number : ");
    scanf("%d", &input);

    int rData = input + 5;
    printf("print temp value : %d\r\n", rData);

    int result = testFunc(rData);
    result += 10;
    printf("result : %d\r\n", result);

    return 0;
}