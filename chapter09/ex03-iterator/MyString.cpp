#include "MyString.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>


MyString::MyString(void)
        : m_pszData(nullptr), m_nLength(0) {
    //	cout << "CMyString()" << endl;
}

MyString::MyString(const char *pszParam)
        : m_pszData(nullptr), m_nLength(0) {
    //	cout << "CMyString(const char*)" << endl;
    setString(pszParam);
}

MyString::MyString(const MyString &rhs)
        : m_pszData(nullptr), m_nLength(0) {
    //	cout << "CMyString(const CMyString &)" << endl;
    this->setString(rhs.m_pszData);
}

MyString::~MyString(void) {
    //	cout << "~CMyString()" << endl;
    release();
}

int MyString::setString(const char *pszParam) {
    release();
    if (pszParam == nullptr) return 0;


    m_nLength = (int) strlen(pszParam);
    if (m_nLength == 0) return 0;


    //	m_pszData = (char*)calloc( m_nLength + 1, sizeof(char) );
    m_pszData = new char[m_nLength + 1];

    strcpy(m_pszData, pszParam);

    onSetString(m_pszData);


    return m_nLength;
}

void MyString::release(void) {

    delete[] m_pszData;

    m_pszData = NULL;
    m_nLength = 0;
}

MyString &MyString::operator=(const MyString &strParam) {
    if (this != &strParam)
        setString(strParam.m_pszData);

    return *this;
}

MyString &MyString::operator=(const char *pszParam) {
    if (this->m_pszData != pszParam)
        setString(pszParam);

    return *this;
}

MyString MyString::operator+(const MyString &rhs) {
    MyString strResult(*this);
    strResult.append(rhs.m_pszData);
    return strResult;
}

int MyString::append(const char *pszParam) {
    if (pszParam == NULL) return 0;

    int nLenParam = (int) strlen(pszParam);
    if (nLenParam == 0) return 0;

    if (m_pszData != NULL) {
        int nLenResult = m_nLength + nLenParam;
        char *pszResult = new char[nLenResult + 1];
        strcpy(pszResult, m_pszData);
        strcpy(pszResult + m_nLength, pszParam);
        release();
        m_pszData = pszResult;
        m_nLength = nLenResult;
    } else {
        this->operator=(pszParam);
    }
    return 0;
}

MyString MyString::operator+(const char *pszParam) {
    MyString strResult(*this);
    strResult.append(pszParam);
    return strResult;
}

MyString operator+(const char *pszLeft, const MyString &strRight) {
    MyString strResult(pszLeft);
    strResult.append(strRight.m_pszData);
    return strResult;
}

int MyString::testFunc(const char *pszParam) {
    return setString(pszParam);
}

int MyString::onSetString(const char *pszParam) {
    return 1;
}
