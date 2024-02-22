#include "CMyString.h"
#include <iostream>
#include <memory>

using namespace std;

/** CMyString 의 생성자 */
CMyString::CMyString() {
    cout << "CMyString()" << endl;
}

CMyString::CMyString(const CMyString &rhs) {

    this->setData(rhs.getData());
}

CMyString::~CMyString() {
    cout << "~CMyString()" << endl;
    delete[] m_pszData;
}

/** c++는 포인터로 받을 때 읽기만 할 것 인지를 엄격히 따지므로 const 키워드를 붙이는 것이 중요하다. */
void CMyString::setData(const char *pszParam) {
    /** 이미 메모리를 할당 받았으면, 이전 메모리에 대한 정보를 삭제 해줘야 한다. -> 여러번 사용이 될 수 있는 상황에 대해서 고려해야한다. */
    if (m_pszData != nullptr) {
        delete[] m_pszData;
    }

    size_t paramLength = strlen(pszParam);
    m_pszData = new char[paramLength + 1];
    /** 메모리 초기화 */
    memset(m_pszData, '\0', (paramLength + 1));
    /** 문자열 복사는 메모리 복사를 해야 한다. */
    strcpy(m_pszData, pszParam);
    this->m_length = paramLength;
}

char *CMyString::getData() const {
    return this->m_pszData;
}

size_t CMyString::getLength() const {
    return this->m_length;
}