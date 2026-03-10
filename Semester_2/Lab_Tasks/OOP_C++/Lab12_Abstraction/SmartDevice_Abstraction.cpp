#include <iostream>
using namespace std;

class SmartDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class SmartLight : public SmartDevice {
public:
    void turnOn() override {
        cout << "Smart Light: Activating circuit..." << endl;
        cout << "Smart Light is ON." << endl;
    }
    void turnOff() override {
        cout << "Smart Light: Cutting power supply..." << endl;
        cout << "Smart Light is OFF." << endl;
    }
};

class SmartFan : public SmartDevice {
public:
    void turnOn() override {
        cout << "Smart Fan: Starting motor..." << endl;
        cout << "Smart Fan is ON." << endl;
    }
    void turnOff() override {
        cout << "Smart Fan: Stopping motor..." << endl;
        cout << "Smart Fan is OFF." << endl;
    }
};

int main() {
    SmartDevice* device;
    SmartLight light;
    SmartFan fan;

    device = &light;
    device->turnOn();
    device->turnOff();

    cout << endl;

    device = &fan;
    device->turnOn();
    device->turnOff();

    return 0;
}