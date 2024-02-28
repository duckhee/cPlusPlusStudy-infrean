#include <iostream>

using namespace std;

/** interface class */
class Device {
public:
    Device() {}

    virtual ~Device() {}
    /** 순수 가상 함수 -> 파생 클래스는 반드시 재정의를 해야한다. */
    virtual int getDeviceId() = 0;

protected:
    int deviceId = 0;
};

class Tv : public Device {
public:
    Tv(int id) {
        this->deviceId = id;
    }

    ~Tv() {}

    int getDeviceId() {
        cout << "Tv::getDeviceId()" << endl;
        return this->deviceId;
    }
};

class Phone : public Device {
public:
    Phone(int id) {
        this->deviceId = id;
    }

    ~Phone() {}

    int getDeviceId() {
        cout << "Phone::getDeviceId()" << endl;
        return this->deviceId;
    }
};

void printId(Device *obj) {
    cout << "Device ID : " << obj->getDeviceId() << endl;
}

int main() {
    Tv myTv(5);
    Phone myPhone(10);
    printId(&myTv);
    printId(&myPhone);
    return 0;
}