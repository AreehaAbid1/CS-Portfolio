#include<iostream>
using namespace std;

class Time{
    private:
    int hours, minutes, seconds;
    public:

    //default constructor
    Time(){

    }

    //parametrized constructor
    Time(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }

    //display method
    void display(){
        cout<<"====DISPLAYING TIME===="<<endl;
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }

    //addingTimeObjects method
    void addTimeObj(Time t1, Time t2){
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;
        seconds = t1.seconds + t2.seconds;
    }
};

int main(){
    Time time1(5, 12, 45);
    Time time2(3, 88, 35);
    Time time3;
    time3.addTimeObj(time1, time2);
    time3.display();
}