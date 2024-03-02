#ifndef CPLUSPLUSSTUDY_INFREAN_USERINTERFACE_H
#define CPLUSPLUSSTUDY_INFREAN_USERINTERFACE_H

#define clear() printf("\033[H\033[J")

class CMyList;

class CUserInterface {
public:
    CUserInterface(CMyList &rList);

    ~CUserInterface(void);

    void add(void);

protected:
    CMyList &m_list;

public:
    void search(void);

    void remove(void);

    int printUI(void);

    int run(void);
};

#endif
