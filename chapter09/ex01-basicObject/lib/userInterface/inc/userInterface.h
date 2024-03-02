#ifndef CPLUSPLUSSTUDY_INFREAN_USERINTERFACE_H
#define CPLUSPLUSSTUDY_INFREAN_USERINTERFACE_H

#define clear() printf("\033[H\033[J")

/** 단순히 존재에 대해서 알려주기 위한 선언이다. -> header 를 포함 시키지 않아도 된다. extern 키워드 사용과 비슷하다. */
class CMyList;

class CUserInterface {
public:
    CUserInterface(CMyList &rList);

    ~CUserInterface(void);

    void add(void);

protected:
    /** 참조만 할 경우 헤더 파일을 포함을 시키지 않아도 된다. */
    CMyList &m_list;

public:
    void search(void);

    void remove(void);

    int printUI(void);

    int run(void);
};

#endif
