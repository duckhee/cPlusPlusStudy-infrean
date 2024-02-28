#include <iostream>

using namespace std;

class CMyObject {
public:
    CMyObject() {
        cout << "CMyObject()" << endl;
    }

    virtual ~CMyObject() {}
};

class CMyImage : virtual public CMyObject {
public:
    CMyImage() {
        cout << "CMyImage()" << endl;
    }
};

class CMyShape : virtual public CMyObject {
public:
    CMyShape() {
        cout << "CMyShape()" << endl;
    }
};

/** CMyObject 를 상속 받는 모든 클래스를 virtual 선언을 해줘야 공통의 기본 클래스가 하나만 생성이 된다.  */
class CMyPicture : public CMyImage, public CMyShape {
public:
    CMyPicture() {
        cout << "CMyPicture()" << endl;
    }
};

int main() {
    CMyPicture picture;
    return 0;
}