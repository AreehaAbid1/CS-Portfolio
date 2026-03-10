#include <iostream>
using namespace std;

class Appliance {
private:
    string name;
    double powerRating;
    double usageTime;

public:
    Appliance(string n, double p, double u) {
        name = n;
        powerRating = p;
        usageTime = u;
    }

    void setPowerRating(double p) {
        powerRating = p;
    }

    void setUsageTime(double u) {
        usageTime = u;
    }

    double getDailyConsumption() {
        return powerRating * usageTime;
    }

    string getName() {
        return name;
    }
};

string compareEnergy(Appliance a1, Appliance a2) {
    if (a1.getDailyConsumption() > a2.getDailyConsumption())
        return a1.getName();
    else
        return a2.getName();
}

int main() {
    Appliance a1("Refrigerator", 150, 24);
    Appliance a2("Air Conditioner", 1200, 6);
    cout << "Higher energy consumption: " << compareEnergy(a1, a2) << endl;
    return 0;
}
