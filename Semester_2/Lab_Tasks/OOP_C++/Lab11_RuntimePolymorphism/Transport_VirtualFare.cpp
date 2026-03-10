#include <iostream>
using namespace std;

class Transport {
public:
    virtual double calculateFare() = 0;
};

class Bus : public Transport {
    double baseFare, ratePerKm;
    int distance;
public:
    Bus(double base, double rate, int km) {
        baseFare = base;
        ratePerKm = rate;
        distance = km;
    }

    double calculateFare() {
        return baseFare + (ratePerKm * distance);
    }
};

class Taxi : public Transport {
    double baseFare, ratePerKm, waitCharge;
    int distance, waitTime;
public:
    Taxi(double base, double rate, double wait, int km, int waitMin) {
        baseFare = base;
        ratePerKm = rate;
        waitCharge = wait;
        distance = km;
        waitTime = waitMin;
    }

    double calculateFare() {
        return baseFare + (ratePerKm * distance) + (waitCharge * waitTime);
    }
};

int main() {
    Transport* t1 = new Bus(50, 10, 15);
    Transport* t2 = new Taxi(70, 15, 2, 10, 5);

    cout << "Bus Fare: " << t1->calculateFare() << endl;
    cout << "Taxi Fare: " << t2->calculateFare() << endl;

    return 0;
}
