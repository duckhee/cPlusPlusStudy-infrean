#include <iostream>

using namespace std;

template<typename T>
class MyData {
public:
    MyData(T data) : m_data(data) {
        cout << "MyData()" << endl;
    }

    ~MyData() {
        cout << "~MyData() basic type" << endl;
    }

    void setData(const T data) {
        this->m_data = data;
    }

    T getData() const {
        return this->m_data;
    }

private:
    T m_data;
};

/** 템플릿의 특수화 */
/** 특정 자료형에 대해서 맞춤 정의 하는 것을 말한다. */
template<>
class MyData<const char *> {
public:
    MyData(const char *data) {
        if (data == nullptr) {
            return;
        }
        size_t length = strlen(data);
        m_data = new char[length + 1];
        strcpy(m_data, data);
    }

    ~MyData() {
        cout << "~MyData() pointer const char *" << endl;
        if (m_data != nullptr) {
            delete[] m_data;
        }
    }

    char *getData() const {
        return this->m_data;
    }

    void setData(const char *psz) {
        if (psz == nullptr) {
            return;
        }
        if (this->m_data != nullptr) {
            delete[] m_data;
        }
        size_t length = strlen(psz);
        m_data = new char[length + 1];
        strcpy(m_data, psz);
    }

private:
    char *m_data;
};

int main() {
    MyData<const char *> hello("Hello");
    cout << hello.getData() << endl;
    return 0;
}
