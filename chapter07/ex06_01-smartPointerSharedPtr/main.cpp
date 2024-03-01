#include <iostream>

using namespace std;

class Test {
public:
    Test() {
        cout << "Test()" << endl;
    }

    ~Test() {
        cout << "Test()" << endl;
    }

    void testFunc(void) {
        cout << "testFunc(void)" << endl;
    }
};

int main() {
    cout << "******* Begin *******" << endl;
    /** smart pointer 인 shared_ptr 을 생성 -> 특징으로는 생성된 pointer 에 대한 갯수를 관리를 한다. */
    shared_ptr<Test> ptr1(new Test);
    /** pointer 에 대한 갯수 출력 */
    cout << "ptr number : " << ptr1.use_count() << endl;
    {
        /** ptr1 을 참조하는 pointer 생성 */
        shared_ptr<Test> ptr2(ptr1);
        cout << "ptr counter : " << ptr1.use_count() << endl;
        cout << "[ptr2]ptr counter : " << ptr2.use_count() << endl;

        ptr2->testFunc();
        /** shared_ptr 은 이동이 아니므로 이전의 pointer 로 접근이 가능하다. */
        ptr1->testFunc();
    }
    cout << "Counter : " << ptr1.use_count() << endl;
    ptr1->testFunc();
    cout << "******* End *******" << endl;
    return 0;
}