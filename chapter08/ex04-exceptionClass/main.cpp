#include <iostream>
using namespace std;

class CMyException
{
public:
    // 예외 코드와 메시지를 입력받는다.
    CMyException(int nCode, const char* pszMsg)
    {
        m_nErrorCode = nCode;
        strcpy_s(m_szMsg, sizeof(m_szMsg), pszMsg);
    }

    int GetErrorCode() const { return m_nErrorCode; }
    const char* GetMessage() const { return m_szMsg; }

private:
    int m_nErrorCode;
    char m_szMsg[128];
};


int main()
{
    try
    {
        int nInput = 0;
        cout << "양의 정수를 입력하세요.: ";
        cin >> nInput;

        if (nInput < 0)
        {
            CMyException exp(10, "양의 정수를 입력해야 합니다.");
            throw exp;
        }
    }
    /** 에러 클래스에 대한 참조를 받아서 처리한다. */
    catch (CMyException& exp)
    {
        cout << "ERROR CODE [" << exp.GetErrorCode() << "] "
             << exp.GetMessage() << endl;
    }

    return 0;
}
