#ifndef CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
#define CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H

#include <cstddef>

class CMyString {
public:
    CMyString();

    /** 변환 생성자 추가 */
    /** 묵시적으로 임시 객체를 생성하지 않도록 하기 위한 keyword -> explicit */
    explicit CMyString(const char *pszData);

    CMyString(const CMyString &rhs);

    ~CMyString();

    char *getData() const;

    size_t getLength() const;

    void setData(const char *pszData);

    /** 단순 대입 연산자를 deep copy 해주기 위한 operator 재정의 */
    void operator=(const CMyString &rhs);

    /** 문자열로 class instance 객체를 직렬화 해주기 위한 형 변환 재정의 */
    operator char *(void) const;

private:
    char *m_pszData = nullptr;
    size_t m_length;
};


#endif //CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
