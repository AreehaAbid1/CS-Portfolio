// 6. Write a C++ program that uses nested structures to calculate the area of a dining room.
// Define astructure named Distance with two members an int feet and a float inches and
// another structure named Room that contains two Distance variables (one for length and
// one for width).Then, create a variable of type Room, assign values to its members (you
// decide how to initialize them), convert each dimension to a floating-point number in feet
// (by converting inches to a fraction of a foot), compute the area in square feet, and display
// the result.
#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

struct Room{
    Distance length;
    Distance width;
};

int main(){
    Room r1;
    r1.length.feet = 12;
    r1.length.inches = 6.0;
    cout<<"Room length in feet: "<<r1.length.feet<<endl<<"Room length in inches: "<<r1.length.inches<<endl;

    r1.width.feet = 10;
    r1.width.inches = 3.0;
    cout<<"Room width in feet: "<<r1.width.feet<<endl<<"Room length in inches: "<<r1.width.inches<<endl;
    
    r1.length.inches = r1.length.feet + (6.0/12);
    cout<<"Room length from inches to feet: "<<r1.length.inches<<endl;
    r1.width.inches = r1.width.feet + (3.0/12);
    cout<<"Room width from inches to feet: "<<r1.width.inches<<endl;

    cout<<"AREA"<<endl;
    float area = r1.length.inches*r1.width.inches;
    cout<<"Area: "<<area<<endl;
}