#ifndef CPLUSPLUSSTUDY_INFREAN_USERDATA_H
#define CPLUSPLUSSTUDY_INFREAN_USERDATA_H


class CUserData {
    friend class CMyList;

public:
    CUserData(void);

    ~CUserData(void);

    const char *getName(void) const { return szName; }

    const char *getPhone(void) const { return szPhone; }

    const CUserData *getNext(void) const { return pNext; }

    static int getUserDataCounter(void) { return nUserDataCounter; }

protected:
    char szName[32];   // ¿Ã∏ß
    char szPhone[32];  // ¿¸»≠π¯»£

    CUserData *pNext;

    static int nUserDataCounter;
};

#endif //CPLUSPLUSSTUDY_INFREAN_USERDATA_H
