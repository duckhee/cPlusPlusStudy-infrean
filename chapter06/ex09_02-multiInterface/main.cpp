#include <iostream>

using namespace std;

class CMyUsb {
public:
    virtual int getUsbVersion() = 0;

    virtual int getTransferRate() = 0;
};

class CMySerial {
public:
    virtual int getSignal() = 0;

    virtual int getRate() = 0;
};

class CMyDevice : public CMyUsb, public CMySerial {
public:
    int getUsbVersion() override {
        cout << "MyDevice::getUsbVersion()" << endl;
        return 0;
    }

    int getTransferRate() override {
        cout << "MyDevice::getTransferRate()" << endl;
        return 0;
    }

    int getSignal() override {
        cout << "MyDevice::getSignal()" << endl;
        return 0;
    }

    int getRate() override {
        cout << "MyDevice::getRate()" << endl;
        return 0;
    }
};

int main() {
    CMyDevice device;
    /** serial 기능 함수 인터페이스  */
    device.getRate();
    device.getTransferRate();
    /** usb 기능 함수  인터페이스 */
    device.getUsbVersion();
    device.getTransferRate();
    return 0;
}