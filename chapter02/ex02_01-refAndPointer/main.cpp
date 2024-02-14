#include <iostream>

void swap(int &A, int &B);

int main() {
    int data = 10;
    /** call by reference 주소 값을 참조하는 형태 -> c 언어에서는 pointer 변수를 이용해서 사용하던 부분이다. */
    int &ref = data;
    ref = 20;
    std::cout << data << std::endl;
    /** pointer 를 이용해서 주소값에 할당된 데이터를 참조하는 형태이다. */
    int *pData = &data;
    *pData = 30;
    std::cout << data << std::endl;

    /** 참조자를 이용한 swap */
    int x = 10, y = 20;
    std::cout << "[Before] " << "x : " << x << ", y : " << y << std::endl;
    swap(x, y);
    std::cout << "[After] " << "x : " << x << ", y : " << y << std::endl;
    return 0;
}

void swap(int &A, int &B) {
    int pTemp = A;
    A = B;
    B = pTemp;
}