#include <iostream>

using namespace std;

class Shape {
public:
    Shape() {}

    virtual ~Shape() {}

    virtual void draw() {
        cout << "Shape::draw" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Circle::draw()" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Rectangle::draw()" << endl;
    }
};

int main() {
    int nInput;
    cout << "도형 번호를 입력하세요. [1:사각형, 2:원형] : " << endl;
    cin >> nInput;
    Shape *pShape = nullptr;
    if (nInput == 1) {
        pShape = new Rectangle();
    } else if (nInput == 2) {
        pShape = new Circle();
    } else {
        pShape = new Shape();
    }
    /** virtual 함수를 이용해서 look up table 과 같은 효과를 이용해서 출력 */
    pShape->draw();
    /** 동적으로 casting 예를 보이는 것 -> 성능과 효율성이 떨어진다. */
    /** 사각형 class 로 동적 형 변환 -> 변환이 되지 안을 때 NULL 값을 반환한다. */
    Rectangle *pRect = dynamic_cast<Rectangle *>(pShape);
    if (pRect != NULL) {
        cout << "Rectangle::draw()" << endl;
        pRect->draw();

    } else {
        Circle *pCircle = dynamic_cast<Circle *>(pShape);
        if (pCircle != NULL) {
            cout << "Circle::draw()" << endl;
            pCircle->draw();

        } else {
            cout << "Shape::draw()" << endl;
            pShape->draw();
        }
    }
    delete pShape;
    return 0;
}