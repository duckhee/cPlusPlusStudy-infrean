#ifndef CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
#define CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H

#include <cstddef>


class CMyString {
/** r-value 에 대해 지원하기 위한 operator + 지원을 위한 설정 -> 전역 함수로 선언하는 것보단 friend 롯 선언을 해주면 더 관계에 대해서 정의만 보고 파악이 쉬워 진다. */
    friend CMyString operator+(const char *pLeft, const CMyString &rhs);

/** 외부에서 접근이 가능한 지시자 */
public:
    CMyString();

    /** 변환 연산자 -> 묵시적으로 임시 객체를 생성 하는 것을 막기 위한 explicit keyword 로 정의 한다. */
    explicit CMyString(const char *pszData);

    /** 복사 생성자 정의 */
    CMyString(const CMyString &rhs);

    /** 이동 생성자 정의 -> r-value 참조를 매개변수로 받는다. */
    CMyString(CMyString &&rhs) noexcept;

    /** 소멸자 */
    /** 소멸자를 가상화 해주기 위한 virtual */
    virtual ~CMyString();

    void setData(const char *pszData);

    /** 포인터로 넣어온 값을 변경해서 넣어줄 수도 있다. */
    /** 포인터 변수 자체의 값을 변경할수도 있으므로 포인터 변수의 참조를 넣어준다. */
    virtual void onSetData(const char *&param);

    int appendData(const char *pszData);

    size_t getLength() const;

    char *getData() const;

    /** class 형에 대한 재정의 */
    operator char *() const;

    /** 단순 대입 연산을 위한 operator 재정의 */
    CMyString &operator=(const CMyString &rhs);

    /** 이동 생성자의 단순 대입을 위한 operator 재정의 */
    CMyString &operator=(CMyString &&rhs) noexcept;

    /** 객체 간에 덧셈 연산을 위한 재정의 */
    CMyString operator+(const CMyString &rhs);

    /** 오른쪽 값이 const char 형태에 대한 덧셈을 지원하기 위한 operator 재정의 */
    CMyString operator+(const char *pszData);

    /** 단항 덧셈 연산에 대한 재정의 */
    CMyString &operator+=(const CMyString &rhs);

    /** 단항 덧셈 연산에 대한 재정의 */
    CMyString &operator+=(const char *pszData);

    /** 배열 요소 접근을 위한 배열에 대한 연산 재정의 -> 배열 요소에 접근해서 읽어서 값을 반환 하는 연산 (읽기 전용이다.)*/
    char operator[](int index) const;

    /** l-value 에 대한 배열 값 대입 operator 재정의 */
    char &operator[](int index);

/** 외부에서 접근이 불가능한 지시자 */
private:
    char *m_pszData = nullptr;
    size_t m_length;
};


#endif //CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
