#include <iostream>
using namespace std;

class Distance {
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, float i) : feet(f), inches(i) {}

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() {
        cout << feet << "'-" << inches << "\"" << endl;
    }

    Distance& operator+=(const Distance& d) {
        feet += d.feet;
        inches += d.inches;
        if (inches >= 12) {
            feet += int(inches) / 12;
            inches = int(inches) % 12 + (inches - int(inches));
        }
        return *this;
    }
};

int main() {
    Distance d1, d2(5, 9.5);
    d1.input();
    d1 += d2;
    cout << "Total Distance: ";
    d1.display();
    return 0;
}
