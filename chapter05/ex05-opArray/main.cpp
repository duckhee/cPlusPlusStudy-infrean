#include <iostream>

using namespace std;

class IntArray {
public:
    IntArray(const int size) {
        pBuffer = new int[size]{0};
        this->size = size;
    }

    ~IntArray() {
        delete[] pBuffer;
        pBuffer = nullptr;
    }

    /** 값을 지정해서 사용 하는 r-value 를 부를 때 사용이 되는 배열 연산자 재정의 */
    int operator[](const int index) const {
        cout << "operator[] const" << endl;
        return pBuffer[index];
    }

    /** 배열 연산자 재정의 -> 여기서는 for 문에서 접근 하는 과정에서 호출이 도니다. */
    int &operator[](const int index) {
        cout << "operator[]" << endl;
        return pBuffer[index];
    }

private:
    int *pBuffer = nullptr;
    int size = 0;
};

void testFunc(const IntArray &arr) {
    cout << "testFunc()" << endl;
    cout << arr[3] << endl;
}

int main() {
    IntArray arr(5);
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }
    testFunc(arr);
    return 0;
}