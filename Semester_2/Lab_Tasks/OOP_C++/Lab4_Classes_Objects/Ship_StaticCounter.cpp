#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;
public:
    void setAngle() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }
    void display() const {
        cout << degrees << "°" << minutes << "' " << direction;
    }
};

class Ship {
private:
    static int count;
    int serialNumber;
    Angle latitude;
    Angle longitude;
public:
    Ship() {
        serialNumber = ++count;
    }
    void setPosition() {
        cout << "Enter latitude:\n";
        latitude.setAngle();
        cout << "Enter longitude:\n";
        longitude.setAngle();
    }
    void displayPosition() const {
        cout << "Ship Serial Number: " << serialNumber << endl;
        cout << "Latitude: ";
        latitude.display();
        cout << ", Longitude: ";
        longitude.display();
        cout << endl;
    }
};

int Ship::count = 0;

int main() {
    Ship s1, s2, s3;
    s1.setPosition();
    s2.setPosition();
    s3.setPosition();
    s1.displayPosition();
    s2.displayPosition();
    s3.displayPosition();
    return 0;
}
