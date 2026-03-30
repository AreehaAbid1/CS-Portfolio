// 2)	Design a program that allows a user to interact with smart devices like a light and a fan
//using simplified commands like turnOn() or turnOff(). The actual mechanism (wiring, circuits)
//should remain hidden.

// •	You must define a base class SmartDevice with functions like turnOn() and
// •	turnOff().
// •	Create two derived classes: SmartLight and SmartFan, which override those functions.
// •	Show how a user can control these devices using just these functions without needing to know
// the inner hardware working.
#include<iostream>
using namespace std;

class SmartDevice{
    public:
    char choice;
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class SmartLight : public SmartDevice{
    public:
    bool LightSwitch;
    void turnOn() override {
        cout<<"Smart Light is ON"<<endl;
    }

    void turnOff() override {
        cout<<"Smart Light is OFF"<<endl;
    }

    void SmartLightSwitch(){
        cout<<"===LIGHT SWITCH==="<<endl;
        cout<<"ON = 1 || OFF = 0"<<endl;
        cin>>LightSwitch;
        if(LightSwitch==true){
            turnOn();
        }
        else if(LightSwitch==false){
            turnOff();
        }
    }
};


class SmartFan : public SmartDevice{
    public:
    bool Fanswitch;
     void turnOn() override {
        cout<<"Fan is ON"<<endl;
    }

    void turnOff() override {
        cout<<"Fan is OFF"<<endl;
    }

    void SmartFanSwitch(){
        cout<<"===FAN SWITCH==="<<endl;
        cout<<"ON = 1 || OFF = 0"<<endl;
        cin>>Fanswitch;
        if(Fanswitch==true){
            turnOn();
        }
        else if(Fanswitch==false){
            turnOff();
        }
    }
};

int main(){
    SmartLight light;
    light.SmartLightSwitch();
    SmartFan fan;
    fan.SmartFanSwitch();
}