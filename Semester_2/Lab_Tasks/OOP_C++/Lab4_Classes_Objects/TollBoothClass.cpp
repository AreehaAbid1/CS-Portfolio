#include <iostream>
using namespace std;

class tollBooth {
private:
    unsigned int totalCars;
    double totalCash;
public:
    tollBooth() : totalCars(0), totalCash(0.0) {}
    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }
    void nopayCar() {
        totalCars++;
    }
    void display() const {
        cout << "Total cars: " << totalCars << endl;
        cout << "Total cash: $" << totalCash << endl;
    }
};

int main() {
    tollBooth booth;
    char ch;
    cout << "Press 'p' for paying car, 'n' for nonpaying car, 'e' to exit.\n";
    do {
        cin >> ch;
        if (ch == 'p')
            booth.payingCar();
        else if (ch == 'n')
            booth.nopayCar();
    } while (ch != 'e');
    booth.display();
    return 0;
}
