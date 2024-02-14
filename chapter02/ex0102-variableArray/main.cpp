#include <iostream>

int main() {
    /** 배열에 대한 동적 할당 -> c++ style */
    int *pArr = new int[5];
    /** c++ style 의 2차원 배열 동적 할당 -> 여기서 입력되는 값은 행(row-가로)에 대한 값이다. */
    int **pdArr = new int *[5];
    /** 배열에 대한 동적 할당 -> c style */
    int *pcArr = (int *) malloc(sizeof(int) * 5);
    /** c style 의 2차원 배열 동적 할당 -> 여기서 입력되는 값은 행(row-가로)에 대한 값이다. */
    int **pdcArr = (int **) malloc(sizeof(int *) * 5);
    /** 배열에 값을 넣기 위한 for 문 */
    for (int i = 0; i < 5; ++i) {
        pArr[i] = (i + 1) * 10;
        pcArr[i] = (i + 1) * 10;
    }
    /** c++ style 의 출력 */
    for (int i = 0; i < 5; ++i) {
        std::cout << "(c++) pArr[" << i << "] - " << pArr[i] << std::endl;
    }
    /** c style 의 출력 */
    for (int i = 0; i < 5; ++i) {
        printf("(c) pcAddr[%d]=%d\r\n", i, pcArr[i]);
    }
    /** c++ style 의 배열 메모리 해제 하는 방법 */
    delete[] pArr;
    /** c style 의 배열 메모리 해제 하는 방법 */
    free(pcArr);
    /** 열(column-세로)에 대한 값을 넣기 위해 열 배열에 대한 할당 */
    for (int i = 0; i < 5; ++i) {
        /** c++ style dynamic array */
        pdArr[i] = new int[5];
        /** c style dynamic array */
        pdcArr[i] = (int *) malloc(sizeof(int) * 5);
    }
    /** 2차원 배열에 대한 초기 값 넣어주기 */
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            pdcArr[i][j] = i + j;
            pdArr[i][j] = i + j;
        }
    }
    /** c++ style print double array */
    std::cout << "c++ style call double array dynamic " << std::endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << "pdArr[" << i << "][" << j << "] - " << pdArr[i][j] << std::endl;
        }
    }
    std::cout << std::endl;
    /** c style print double array */
    printf("c style call double array dynamic \r\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("pdcArr[%d][%d] - %d\r\n", i, j, pdcArr[i][j]);
        }
    }
    /** 열 동적 배열에 대한 메모리 해제 */
    for (int i = 0; i < 5; ++i) {
        /** c++ style 의 배열 메모리 해제 하는 방법 */
        delete[] pdArr[i];
        /** c style 의 배열 메모리 해제 하는 방법 */
        free(pdcArr[i]);
    }
    /** 행에 대한 동적 배열에 대한 메모리 해제 */

    /** c++ style 의 배열 메모리 해제 하는 방법 */
    delete[] pdArr;
    /** c style 의 배열 메모리 해제 하는 방법 */
    free(pdcArr);

    return 0;
}