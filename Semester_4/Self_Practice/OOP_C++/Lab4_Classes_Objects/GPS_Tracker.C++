// 5. A company developing a GPS tracking system needs to calculate the total distance between
// two points. Define a class Distance with attributes for feet and inches. Implement a
// member function outside the class that takes two Distance objects and adds them to return
// the total distance. Create a program that demonstrates adding two Distance objects using
// a function defined outside the class.
#include<iostream>
using namespace std;

class Distance{
    private:
    int feet;
    float inches;
    public:
    Distance(int ft, float in){
        feet = ft;
        inches = in;
    }
    Distance(){}
    //addObj method declaration
    void addPoints(Distance d1, Distance d2);
};

void Distance :: addPoints(Distance d1, Distance d2){
    feet = d1.feet + d2.feet;
    inches = d1.inches + d2.inches;
    cout<<"DISTANCE BETWEEN 2 POINTS: "<<endl;
    cout<<feet<<"'"<<inches<<endl;
}

int main(){
    Distance d1(22, 7.6);
    Distance d2(18, 3.8);
    Distance d3;
    d3.addPoints(d1, d2);
}