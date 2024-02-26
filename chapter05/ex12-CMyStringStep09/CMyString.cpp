#include <iostream>
#include "CMyString.h"

using namespace std;

CMyString::CMyString() {
    cout << "CMyString()" << endl;
}

CMyString::~CMyString() {
    cout << "~CmyString()" << endl;
    delete[] m_pszData;
}

/** 변환 생성자 */
CMyString::CMyString(const char *pszData) {
    cout << "CMyString(const char *)" << endl;
    this->setData(pszData);
}

/** 복사 생성자 */
CMyString::CMyString(const CMyString &rhs) {
    cout << "CMyString(const CMyString &)" << endl;
    this->setData(rhs.getData());
}

/** 이동 생성자 -> shallow copy */
CMyString::CMyString(CMyString &&rhs) noexcept {
    cout << "CMyString(CMyString &&))" << endl;
    if (this->m_pszData != nullptr) {
        delete[] this->m_pszData;
    }
    this->m_pszData = rhs.m_pszData;
    rhs.m_pszData = nullptr;
    this->m_length = rhs.getLength();
}


void CMyString::setData(const char *pszData) {
    if (this->m_pszData != nullptr) {
        delete[] this->m_pszData;
    }
    size_t paramLength = strlen(pszData);
    /** 동적 메모리 할당 -> 1을 더해주는 이유는 null 값이 문자열의 끝을 나타내므로 문자열의 끝은 나타내기 위해서 더해준다. */
    this->m_pszData = new char[paramLength + 1];
    memset(this->m_pszData, '\0', (paramLength + 1));
    /** 문자열 복사 */
    strcpy(this->m_pszData, pszData);
    m_length = paramLength + 1;
}

int CMyString::appendData(const char *pszData) {
    if (pszData == nullptr) {
        return -1;
    }
    if (this->m_pszData == nullptr) {
        this->setData(pszData);
        return this->m_length;
    }
    size_t paramLength = strlen(pszData);
    char *pResult = new char[m_length + paramLength];
    memset(pResult, '\0', (m_length + paramLength));
    strcpy(pResult, this->m_pszData);
    strcat(pResult + this->m_length - 1, pszData);
    delete[] this->m_pszData;
    this->m_pszData = pResult;
    m_length += paramLength;
    return this->m_length;
}

char *CMyString::getData() const {
    return this->m_pszData;
}

size_t CMyString::getLength() const {
    return this->m_length;
}

/** 단순 대입 복사 생성 */
CMyString &CMyString::operator=(const CMyString &rhs) {
    cout << "&operator=(const CMyString &)" << endl;
    if (this->m_pszData != nullptr) {
        delete[] this->m_pszData;
    }
    this->setData(rhs.getData());
    return *this;
}

/** 대입 연산 -> 이동 생성 */
CMyString &CMyString::operator=(CMyString &&rhs) noexcept {
    cout << "&operator=(CMyString &&))" << endl;
    if (this->m_pszData != nullptr) {
        delete[] this->m_pszData;
    }
    this->m_pszData = rhs.m_pszData;
    rhs.m_pszData = nullptr;
    this->m_length = rhs.m_length;
    return *this;
}

/** CMyString 형 재정의 -> char * 로 정의 */
CMyString::operator char *() const {
    return this->m_pszData;
}

/** 덧셈 연산 */
CMyString CMyString::operator+(const char *pszData) {
    CMyString result(this->getData());
    result.appendData(pszData);
    return result;
}

CMyString CMyString::operator+(const CMyString &rhs) {
    CMyString result(this->getData());
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


CMyString operator+(const char *pLeft, const CMyString &rhs) {
    CMyString result(pLeft);
//    result.appendData(rhs.getData());
    /** friend 선언이 되어 있기 때문에 private 에 대한 접근이 가능 해진다. */
    result.appendData(rhs.m_pszData);
    return result;
}

