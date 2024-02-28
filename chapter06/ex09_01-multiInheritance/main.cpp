#include <iostream>

using namespace std;

class CMyImage {
public:
    CMyImage(int nHeight, int nWidth) : m_nHeight(nHeight), m_nWidth(nWidth) {
        cout << "CMyImage(int, int)" << endl
    }

    int getHeight() const {
        return this->m_nHeight;
    }

    int getWidth() const {
        return this->m_nWidth;
    }

protected:
    int m_nHeight;
    int m_nWidth;
};

class CMyShape {
public:
    CMyShape(int nType) : m_nType(nType) {
        cout << "CMyShape(int)" << endl;
    }

    int getType() const {
        return this->m_nType;
    }

protected:
    int m_nType;
};

/** 다중 상속한 class */
class CMyPicture : public CMyImage, public CMyShape {
public:
    CMyPicture() : CMyImage(200, 200), CMyShape(1) {
        cout << "CmyPicture" << endl;
    }
};

int main() {
    /** 다중 상속 받은 picture 를 생성 */
    CMyPicture picture;
    cout << "width : " << picture.getWidth() << endl;
    cout << "height : " << picture.getHeight() << endl;
    cout << "type : " << picture.getType() << endl;
    return 0;
}