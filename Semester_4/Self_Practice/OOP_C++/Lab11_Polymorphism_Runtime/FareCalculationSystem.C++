#include<iostream>
using namespace std;

class Transport{
    private:
    float baseFare;
    float ratePerKm;
    public:
    Transport(float bf, float rpk){
        baseFare = bf;
        ratePerKm = rpk;
    }
    virtual void calculateFare(){
        cout<<"Base Fare: "<<baseFare<<endl;
        cout<<"Rate per km: "<<ratePerKm<<endl;
    }
    virtual void display(){
        cout<<"Transport fare: "<<baseFare<<endl;
        cout<<"Rate per km: "<<ratePerKm<<endl;
    }
    //getter
    float getBaseFair(){
        return baseFare;
    }
    float getRatePerKm(){
        return ratePerKm;
    }
};

class Bus : public Transport{
    private:
    float kilometer;
    double BusFair;
    public:
    Bus(float bf, float rpk, float km) : Transport(bf, rpk){
        kilometer=km;
    }
    void calculateFare()override{
        BusFair = getBaseFair() + (getRatePerKm()*kilometer);
    }
    void display()override{
        cout<<"BUS FARE: "<<BusFair<<endl;
    }
};

class Taxi : public Transport{
    private:
    float minutes;
    double TaxiFare;
    float kilometer;
    float lateFeePerMin = 0.8;
    float additionalCharges;
    public:
    Taxi(float bf, float rpk, float m, float km) : Transport(bf, rpk){
        minutes = m;
        kilometer = km;
    }
    void calculateFare()override{
        additionalCharges = minutes * lateFeePerMin;
        TaxiFare = (getBaseFair() + (getRatePerKm() * kilometer)) + additionalCharges;
    }
    void display()override{
        cout<<"TAXI FARE: "<<TaxiFare<<endl;
    }
};

int main(){
    Transport* t;
    Bus b(55.3, 3.5, 8.6);
    Taxi t1(88.9, 6.9, 4.2, 5.1);
    t = &b;
    t->calculateFare();
    t->display();
    t=&t1;
    t->calculateFare();
    t->display();
}