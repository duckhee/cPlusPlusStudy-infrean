#ifndef CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
#define CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
;

/** class 의 이름은 첫 글짜는 대문자로 하는 것이 관습이다. -> c++ 에서 C로 시작 하는 것은 class인 것을 알려주기 위한 것이다. */
class CMyString {
public:
    /** 생성자 */
    CMyString();

    /** 소멸자 */
    ~CMyString();

    /** data 를 저장하는 함수 */
    void setData(const char *pszParam);

    /** char* 를 반환하는 함수 */
    char* getData();


private:
    /** null pointer 변수로 초기화 */
    /** Header 파일에서 다음과 같이 포인터 변수를 초기화를 할 수 있는 것은 14 부터이다.  */
    char *m_pszData = nullptr;
};


#endif //CPLUSPLUSSTUDY_INFREAN_CMYSTRING_H
