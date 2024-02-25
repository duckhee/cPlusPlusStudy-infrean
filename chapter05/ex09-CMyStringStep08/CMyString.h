#ifndef CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
#define CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H

#include <cstddef>

class CMyString {
    /** 덧셈 연산을 위한 전역 함수 정의 -> 전역 함수로 선언이 되어 있는 것을 friend keyword 를 이용해서 해당 클래스에 넣어준 형태가 된다. */
    friend CMyString operator+(const char *pLeft, const CMyString &rhs);

public:
    /** 기본 생성자 */
    CMyString();

    /** 매개변수가 하나 잇는 생성자 */
    /** 변환 새성자 -> 묵시적으로 임시 객체를 생성하는 것을 막기 위한 explicit keyword 로 정의 한다. */
    explicit CMyString(const char *pszData);

    /** 복사 생성자 정의 */
    CMyString(const CMyString &rhs);

    /** 이동 생성자 정의 -> r-value 참조를 매개변수로 받는다. */
    CMyString(CMyString &&rhs) noexcept;

    /** 소멸자 정의 */
    ~CMyString();

    /** 데이터를 저장하는 함수 */
    void setData(const char *pszData);

    /** 기존의 문자열에 값을 추가하는 함수 */
    int appendData(const char *pParam);

    /** 문자열의 길이를 반환 하는 함수 -> 읽기 모드 */
    size_t getLength() const;

    /** 데이터를 가져오는 함수 -> 읽기 모드 */
    char *getData() const;

    /** 형 재엉의 */
    operator char *() const;

    /** 단순 대입 연산자를 위한 operator 재정의 */
    CMyString &operator=(const CMyString &rhs);

    /** 이동 생성자를 위한 대입 연산 재정의 */
    CMyString &operator=(CMyString &&rhs) noexcept;

    /** 객체 간에 덧셈 연산을 위한 재정의 */
    CMyString operator+(const CMyString &rhs);

    /** 오른쪽 값이 const char 형태에 대한 덧셈을 지원하기 위한 operator 재정의 */
    CMyString operator+(const char *pszData);

    /** 단항 덧셈 연산에 대한 재정의 */
    CMyString &operator+=(const CMyString &rhs);

    CMyString &operator+=(const char *pParam);

    /** 배열 요소 접근을 위한 배열에 대한 연산 재정의 -> 배열 요소에 접근해서 읽어서 값을 반환 하는 연산 (읽기 전용이다.)*/
    char operator[](int index) const;

    /** l-value 에 대한 배열 값 대입 operator 재정의 */
    char &operator[](int index);


private:
    char *m_pszData = nullptr;
    size_t m_length;
};


#endif //CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
