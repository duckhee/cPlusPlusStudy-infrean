#ifndef CPLUSPLUSSTUDY_INFREAN_CMYSTRINGFILTER_H
#define CPLUSPLUSSTUDY_INFREAN_CMYSTRINGFILTER_H

#include "CMyString.h"

/** 파생 클래스로 문자열 filter 기능을 추가하기 위한 class */
class CMyStringFilter : public CMyString {
public:
    CMyStringFilter();

    ~CMyStringFilter();

    /** 함수를 재정의 */
//    void setData(const char *pszData);
    /** filter 처리르 위한 함수 재정의 */
    void onSetData(const char *&pszData);

    /** class 형에 대한 재정의 */
    operator char *() const;

    /** 단순 대입 연산을 위한 operator 재정의 */
    CMyStringFilter &operator=(const CMyStringFilter &rhs);

    /** 단순 대입 연산을 위한 operator 재정의 */
    CMyStringFilter &operator=(const char *pszData);

    /** 단항 덧셈 연산에 대한 재정의 */
    CMyStringFilter &operator+=(const CMyStringFilter &rhs);

    /** 단항 덧셈 연산에 대한 재정의 */
    CMyStringFilter &operator+=(const char *pszData);

};


#endif //CPLUSPLUSSTUDY_INFREAN_CMYSTRINGFILTER_H
