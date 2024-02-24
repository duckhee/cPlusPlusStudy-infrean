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

/** 복사 생성자 */
CMyString::CMyString(const CMyString &rhs) {
    cout << "CMyString(const CMyString &)" << endl;
    this->setData(rhs.getData());
}

/** 이동 생성자 */
CMyString::CMyString(CMyString &&rhs) noexcept {
    cout << "CMyString(CMyString&&) - move" << endl;
    this->m_pszData = rhs.m_pszData;
    rhs.m_pszData = nullptr;
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
    if (pszData == nullptr) {
        return;
    }
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

/** 기존에 있던 문자열에 대한 append 함수 */
int CMyString::appendData(const char *pParam) {
    if (pParam == nullptr) {
        return -1;
    }
    if (m_pszData == nullptr) {
        this->setData(pParam);
        return this->m_length;
    }
    /** 입력 받은 문자열 인자의 길이 */
    size_t appendLen = strlen(pParam);
    /** 새로운 저장 공간 확보 */
    char *pResult = new char[m_length + appendLen + 1];
    memset(pResult, '\0', (m_length + appendLen + 1));
    /** 새로 할당한 메모리에 값 제저 */
    strcpy(pResult, m_pszData);
    /** 문자열 이어 붙이기 -> strcat 을 이용해서 문자열을 이어준다. 처음 인자로는 이어 붙이기 시작할 pointer 변수 (붙여 쓸 위치에 대한 정보를 넣어주는 것이 좋다.) 두번째 매개변수는 붙일 문자열이다. */
    strcat(pResult + m_length, pParam);
    /** 기존에 등록된 멤벼 변수 초기화 */
    delete[] m_pszData;
    m_pszData = pResult;
    m_length += appendLen;
    return this->m_length;
}

/** 단순 대입 연산자를 deep copy 해주기 위한 operator 재정의 */
CMyString &CMyString::operator=(const CMyString &rhs) {
    this->setData(rhs.getData());
}

/** 이동 단순 대입 연산자 */
CMyString &CMyString::operator=(CMyString &&rhs) noexcept {
    cout << "operator=(CMyString&&) - move" << endl;
    this->m_pszData = rhs.m_pszData;
    rhs.m_pszData = nullptr;
}

/** 형 변환에 대한 재정의 -> 객체 instance 의 이름을 불렀을 때 형 변환에 대해서 재정의 */
CMyString::operator char *() const {
    return this->getData();
}

/** 덧셈 연산에 대한 연산자 재정의 */
CMyString CMyString::operator+(const CMyString &rhs) {
    /** 변한 생성자인 매개변수 하나를 가지는 생성자 호출 */
    CMyString result(this->m_pszData);
    /** append 기능에 대한 호출 -> 문자열 이어 붙이기 기능 */
    result.appendData(rhs.getData());
    /** 생성된 instance 를 반환 */
    return result;
}

CMyString operator+(const char *pLeft, const CMyString &rhs) {
    CMyString result(pLeft);
    result.appendData(rhs.getData());
    return result;
}