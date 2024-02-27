#include <iostream>
#include "CMyStringFilter.h"

using namespace std;

CMyStringFilter::CMyStringFilter() {
    cout << "CMyStringFilter() extends CMyString" << endl;
}

CMyStringFilter::~CMyStringFilter() {
    cout << "~CMyStringFilter() extends CMyString" << endl;
}

/** set data 에 대한 overRide */
//void CMyStringFilter::setData(const char *pszData) {
//    cout << "CMyStringFilter setData(const char *)" << endl;
//    if (pszData != nullptr) {
//        if (strcmp(pszData, "멍멍이아들") == 0) {
//            CMyString::setData("우리귀염이");
//            return;
//        }
//    }
//    /** 기보 class 의 함수를 호출 */
//    CMyString::setData(pszData);
//}

/** 기본 클래스에 있는 가상함수를 재정의 */
void CMyStringFilter::onSetData(const char *&pszData) {
//    cout << "CMyStringFilter::onSetData(const char *&)" << pszData << endl;
    if (pszData != nullptr) {
        if (strcmp(pszData, "멍멍이아들") == 0) {
            pszData = "우리귀염이";
        }
    }
    /** 기본 클래스에 정의된 함수 원형을 호출하는 것이다. */
    CMyString::onSetData(pszData);
}


/** CMyString 형 재정의 -> char * 로 정의 */
CMyStringFilter::operator char *() const {
    return this->getData();
}


/** 단순 대입 복사 생성 */
CMyStringFilter &CMyStringFilter::operator=(const CMyStringFilter &rhs) {
    cout << "&operator=(const CMyStringFilter &)" << endl;
    this->setData(rhs.getData());
    return *this;
}

/** 단순 대입 연산을 위한 operator 재정의 */
CMyStringFilter &CMyStringFilter::operator=(const char *pszData) {
    cout << "&operator=(const char *)" << endl;
    this->setData(pszData);
    return *this;
}

CMyStringFilter &CMyStringFilter::operator+=(const CMyStringFilter &rhs) {
    this->appendData(rhs.getData());
    return *this;
}

CMyStringFilter &CMyStringFilter::operator+=(const char *pParam) {
    this->appendData(pParam);
    return *this;
}

