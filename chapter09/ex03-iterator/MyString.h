#ifndef CPLUSPLUSSTUDY_INFREAN_MYSTRING_H
#define CPLUSPLUSSTUDY_INFREAN_MYSTRING_H



class MyString {
    MyString(void);
    explicit MyString(const char* pszParam);
    MyString(const MyString & rhs);
    virtual ~MyString(void);

    int setString(const char * pszParam);
    const char* getString(void) const { return m_pszData; }
    int getLength(void) const
    {
        if (m_pszData == nullptr && m_nLength)
            m_nLength = 0;
        return m_nLength;
    }
    void release(void);
    MyString& operator =(const MyString &strParam);
    MyString& operator =(const char * pszParam);
    MyString operator +(const MyString & rhs);
    int append(const char* pszParam);
    MyString operator +(const char* pszParam);
    friend MyString operator + (const char *, const MyString &);

    operator const char * () const
    {
        return m_pszData;
    }

    int testFunc(const char* pszParam);
    virtual int onSetString(const char*);
private:
    char *m_pszData;
    mutable int m_nLength;


};



#endif //CPLUSPLUSSTUDY_INFREAN_MYSTRING_H
