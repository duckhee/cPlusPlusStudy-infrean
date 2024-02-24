#include <iostream>
#include "CMyString.h"

using namespace std;

CMyString::CMyString() {
    cout << "CMyString()" << endl;
}

CMyString::~CMyString() {
    delete[] m_pszData;
}

CMyString::CMyString(const char *pszData) {
    cout << "CMyString(const char *)" << endl;
    this->setData(pszData);
}

/** 복사 생성자 -> deep copy */
CMyString::CMyString(const CMyString &rhs) {
    cout << "CMyString(const CMyString &)" << endl;
    this->setData(rhs.getData());
}

/** 이동 생성자 -> shallow copy */
CMyString::CMyString(CMyString &&rhs) noexcept {
    cout << "CMyString(CMyString&&) - move" << endl;
    if (m_pszData != nullptr) {
        delete[] m_pszData;
    }
    size_t length = strlen(rhs.getData());
    this->m_pszData = rhs.m_pszData;
    rhs.m_pszData = nullptr;
}

void CMyString::setData(const char *pszData) {
    if (this->m_pszData != nullptr) {
        delete[] m_pszData;
    }
    size_t length = strlen(pszData);
    this->m_pszData = new char[length + 1];
    memset(this->m_pszData, '\0', (length + 1));
    strcpy(this->m_pszData, pszData);
    m_length = length + 1;
}

int CMyString::appendData(const char *pParam) {
    if (pParam == nullptr) {
        return -1;
    }
    if (m_pszData == nullptr) {
        this->setData(pParam);
        return this->m_length;
    }
    size_t paramLength = strlen(pParam);
    char *pResult = new char[this->m_length + paramLength];
    memset(pResult, '\0', (this->m_length + paramLength));
    strcpy(pResult, this->m_pszData);
    strcat(pResult + paramLength, pParam);
    delete[] m_pszData;
    m_pszData = pResult;
    m_length += paramLength;
    return this->m_length;
}

char *CMyString::getData() const {
    return this->m_pszData;
}

size_t CMyString::getLength() const {
    return this->m_length;
}

CMyString &CMyString::operator=(const CMyString &rhs) {
    if (this->m_pszData != nullptr) {
        delete[] m_pszData;
    }
    this->setData(rhs.getData());
    return *this;
}

/** move semantics operator */
CMyString &CMyString::operator=(CMyString &&rhs) noexcept {
    cout << "operator=(CMyString&&) - move" << endl;
    if (this->m_pszData != nullptr) {
        delete[] m_pszData;
    }
    this->m_pszData = rhs.m_pszData;
    rhs.m_pszData = nullptr;
    return *this;
}

CMyString CMyString::operator+(const CMyString &rhs) {
    CMyString result(this->m_pszData);
    result.appendData(rhs.getData());
    return result;
}

CMyString &CMyString::operator+=(const CMyString &rhs) {
    this->appendData(rhs.getData());
    return *this;
}

CMyString &CMyString::operator+=(const char *pParam) {
    this->appendData(pParam);
    return *this;
}

/** 배열 요소에 대한 접근해서 요소를 가져오는데 사용되는 연산 재정의 */
char CMyString::operator[](int index) const {
    if (m_pszData == nullptr || index < 0 || index >= m_length) {
        return 0;
    }
    return this->m_pszData[index];
}

/** 배열의 l-value 접근하는 함수 재정의 */
char &CMyString::operator[](int index) {
    return this->m_pszData[index];
}

CMyString::operator char *() const {
    return this->m_pszData;
}

CMyString operator+(const char *pLeft, const CMyString &rhs) {
    CMyString result(pLeft);
    result.appendData(rhs.getData());
    return result;
}

