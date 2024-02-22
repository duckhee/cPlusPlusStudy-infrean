

#ifndef CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
#define CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H


#include <cstddef>

class CMyString {
public:
    CMyString();

    ~CMyString();

    void setData(const char *pszParam);

    /** const 를 붙여주면 간접 지정을 이용해서 값을 변경하는 것을 막아주는데 const가 역활을 한다. */
    char *getData() const;

    size_t getLength() const;

private:
    char *m_pszData = nullptr;
    size_t m_length;
};


#endif //CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
