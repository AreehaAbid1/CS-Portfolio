#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0f) {}
    Distance(int f, float i) : feet(f), inches(i) {}
    void display() const {
        cout << feet << "'-" << inches << "\"" << endl;
    }
    friend Distance addDistance(const Distance& d1, const Distance& d2);
};

Distance addDistance(const Distance& d1, const Distance& d2) {
    Distance temp;
    temp.inches = d1.inches + d2.inches;
    temp.feet = d1.feet + d2.feet + int(temp.inches) / 12;
    temp.inches = int(temp.inches) % 12 + (temp.inches - int(temp.inches));
    return temp;
}

int main() {
    Distance d1(5, 9.5), d2(3, 11.25);
    Distance d3 = addDistance(d1, d2);
    d3.display();
    return 0;
}
