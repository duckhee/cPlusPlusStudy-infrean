#ifndef CPLUSPLUSSTUDY_INFREAN_USERINTERFACE_H
#define CPLUSPLUSSTUDY_INFREAN_USERINTERFACE_H

class MyList;

#define clear() printf("\033[H\033[J")

class UserInterface {
public:
    UserInterface(MyList &list);

    ~UserInterface(void);

    void add(void);

    void search(void);

    void remove(void);

    void printAll(void);

    int printUI(void);

    int run(void);

protected:
    MyList &m_list;

};


#endif //CPLUSPLUSSTUDY_INFREAN_USERINTERFACE_H
