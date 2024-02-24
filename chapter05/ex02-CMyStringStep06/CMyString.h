#ifndef CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
#define CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H

#include <cstddef>

class CMyString {
public:
    CMyString();

    /** 변환 생성자 추가 */
    /** 묵시적으로 임시 객체를 생성하지 않도록 하기 위한 keyword -> explicit */
    explicit CMyString(const char *pszData);

    /** 복사 생성자 */
    CMyString(const CMyString &rhs);

    /** 이동 생성자 -> r-vlaue 참조 생성이니깐 const 를 붙이면 안된다. */
    CMyString(CMyString &&rhs) noexcept;

    ~CMyString();

    char *getData() const;

    size_t getLength() const;

    void setData(const char *pszData);

    /** 기존에 있던 문자열에 대한 append 함수 */
    int appendData(const char *pParam);

    /** 단순 대입 연산자를 deep copy 해주기 위한 operator 재정의 */
    CMyString &operator=(const CMyString &rhs);

    /** 이동 생성자 단순 대입 */
    CMyString &operator=(CMyString &&rhs) noexcept;

    /** 덧셈 연산에 대한 연산자 재정의 */
    CMyString operator+(const CMyString &rhs);

    /** 문자열로 class instance 객체를 직렬화 해주기 위한 형 변환 재정의 */
    operator char *(void) const;

private:
    char *m_pszData = nullptr;
    size_t m_length;
};

CMyString operator+(const char *pLeft, const CMyString &rhs);

#endif //CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
