#include <iostream>

using namespace std;

template<typename T>
class CMyArray {
public:
    /** 변환 생성자 */
    /** 묵시적인 생성을 막기 위한 explicit */
    explicit CMyArray(int nSize) : m_nSize(nSize) {
        m_pData = new T[nSize];
    }

    ~CMyArray() {
        delete[] m_pData;
    }

    /** 복사 생성자 정의 */
    CMyArray(const CMyArray &rhs) {
        if (this == &rhs) {
            return *this;
        }
        delete[] m_pData;
        m_pData = new T(rhs.m_nSize);
        memcpy(m_pData, rhs.m_pData, sizeof(T) * rhs.m_nSize);
        m_nSize = rhs.m_nSize;
        return *this;
    }

    /** 복사 생성자가 정의 되어 있으면, 단순 대입 연산자도 재 정의 해줘야 한다. */
    CMyArray &operator=(CMyArray &rhs) {
        if (this == &rhs) {
            return *this;
        }
        delete[] m_pData;
        m_pData = new T[rhs.m_nSize];
        memcpy(m_pData, rhs.m_pData, sizeof(T) * rhs.m_nSize);
        m_nSize = rhs.m_nSize;
        return *this;
    }

    /** 이동 생성자 */
    /** shallow copy 를 이용한다. */
    CMyArray(CMyArray &&rhs) {
        return operator==(rhs);
    }

    /** 이동 생성자가 정의가 되어 있으면, 단순 대입 연산자도 재정의 해줘야 한다. */
    CMyArray &operator=(CMyArray &&rhs) {
        if (m_pData != nullptr) {
            delete[] m_pData;
        }
        m_pData = rhs.m_pData;
        m_nSize = rhs.m_nSize;
        rhs.m_pData = nullptr;
        rhs.m_nSize = 0;
        return *this;
    }

    /** 배열에 대한 연산 재정의 */
    T &operator[](const int nIndex) {
        if (nIndex < 0 || nIndex >= m_nSize) {
            cout << "Error: 배열의 경계를 벗어난 접근입니다." << endl;
            exit(1);
        }
        return m_pData[nIndex];
    }

    /** 배열에 대한 연산 재정의 -> r-value */
    T operator[](int nIndex) const {
        return operator[](nIndex);
    }

    /** 배열의 총 갯수 반환 */
    int getSize() const {
        return this->m_nSize;
    }

private:
    T *m_pData = nullptr;
    int m_nSize = 0;
};

/** 정적 멤버 벼수 사용과 선언과 정의 분리 -> template */
template<typename T>
class Test {
public:
    Test();

    ~Test();

    T testFunc();

protected:
    /** 정적 멤버 데이터 선언 */
    static T m_ndata;
};

/** Test 정의 */
template<typename T>
Test<T>::Test() {}

template<typename T>
Test<T>::~Test() {}

template<typename T>
T Test<T>::testFunc() {
    return m_ndata;
}

/** 정적 멤버 변수 정의 */
template<typename T>
T Test<T>::m_ndata = 15;

int main() {
    // int 자료형 배열
    CMyArray<int> arr(5);

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for (int i = 0; i < 5; ++i)
        cout << arr[i] << ' ';

    cout << endl;

    CMyArray<int> arr2(3);
    arr2 = arr;
    for (int i = 0; i < 5; ++i)
        cout << arr2[i] << ' ';

    cout << endl;
    cout << arr[0] << endl;

    /** 정적 멤버 변수 템플릿 */
    Test<double> test;
    cout << test.testFunc() << endl;
    return 0;
}