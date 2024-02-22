#include <iostream>
#include "CMyString.h"
#include <memory>

using namespace std;


CMyString::CMyString() {
    cout << "CMyString()" << endl;
}

CMyString::CMyString(const char *pszData) {
    cout << "CMyString(const char *)" << endl;
    this->setData(pszData);
}

CMyString::CMyString(const CMyString &rhs) {
    cout << "CMyString(const CMyString &)" << endl;
    this->setData(rhs.getData());
}

CMyString::~CMyString() {
    cout << "~CMyString()" << endl;
    delete[] m_pszData;
}

char *CMyString::getData() const {
    return this->m_pszData;
}

size_t CMyString::getLength() const {
    return this->m_length;
}

void CMyString::setData(const char *pszData) {
/** 해당 포인터 변수가 null 이 아닐 경우 */
    if (m_pszData != nullptr) {
        delete[] m_pszData;
    }
    size_t paramLength = strlen(pszData);
    m_pszData = new char[paramLength + 1];
    memset(m_pszData, '\0', sizeof(paramLength + 1));
    strcpy(m_pszData, pszData);
    this->m_length = paramLength;
}

/** 단순 대입 연산자를 deep copy 해주기 위한 operator 재정의 */
void CMyString::operator=(const CMyString &rhs) {
    this->setData(rhs.getData());
}

/** 형 변환에 대한 재정의 -> 객체 instance 의 이름을 불렀을 때 형 변환에 대해서 재정의 */
CMyString::operator char *() const {
    return this->getData();
}