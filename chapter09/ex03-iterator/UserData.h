#ifndef CPLUSPLUSSTUDY_INFREAN_USERDATA_H
#define CPLUSPLUSSTUDY_INFREAN_USERDATA_H

#include "MyNode.h"

class UserData : public MyNode {
public:
    UserData(void);

    UserData(const char *pszName, const char *pszPhone);

    ~UserData(void);

    virtual const char *getKey(void);

    virtual void printNode(void);

    const char *getName(void) const;

    const char *getPhone(void) const;

    static int getUserDataCounter(void);

protected:
    char szName[32];
    char szPhone[32];
    /** 생성된 UserData 를 접근하기 위한 static 변수 */
    static int nUserDataCounter;
};


#endif //CPLUSPLUSSTUDY_INFREAN_USERDATA_H
