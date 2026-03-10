#include<iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Room {
    Distance length;
    Distance width;
};

int main() {
    Room diningRoom;

    diningRoom.length.feet = 12;
    diningRoom.length.inches = 6.0;
    diningRoom.width.feet = 10;
    diningRoom.width.inches = 3.0;

    float lengthInFeet = diningRoom.length.feet + (diningRoom.length.inches / 12);
    float widthInFeet = diningRoom.width.feet + (diningRoom.width.inches / 12);
    float area = lengthInFeet * widthInFeet;

    cout << "Area of dining room = " << area << " square feet" << endl;

    return 0;
}
