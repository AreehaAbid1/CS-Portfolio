#include <iostream>
using namespace std;

class Rectangle {
    float length, width;
public:
    Rectangle(float l = 0, float w = 0) : length(l), width(w) {}

    float area() const {
        return length * width;
    }

    Rectangle operator+(const Rectangle& r) {
        Rectangle temp;
        temp.length = 0;
        temp.width = 0;
        return Rectangle(0, this->area() + r.area());
    }

    void displayArea() {
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Rectangle r1(5, 3);
    Rectangle r2(4, 2);
    r1.displayArea();
    r2.displayArea();
    Rectangle r3 = r1 + r2;
    cout << "Combined area: " << r3.area() << endl;
    return 0;
}
