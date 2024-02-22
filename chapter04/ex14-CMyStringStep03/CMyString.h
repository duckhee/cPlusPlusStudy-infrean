//
// Created by duckhee won on 2/22/24.
//

#ifndef CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
#define CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H

#include <cstddef>

class CMyString {
public:
    CMyString();

    /** 복사 생서자가 존재하지 않으면, shallow copy가 되므로 복사 생성자를 만들어줘야한다. */
    CMyString(const CMyString &rhs);

    ~CMyString();

    void setData(const char *pszData);

    /** const 를 뒤에 붙여야 읽기 전용 함수가 된다. */
    char *getData() const;

    size_t getLength() const;

    /** 연산자에 대한 overwrite 재정의 -> 대입 연산에 대한 재정의 */
    void operator=(const CMyString &rhs) {
        this->setData(rhs.getData());
    }

private:
    char *m_pszData = nullptr;
    size_t m_length;
};


#endif //CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
