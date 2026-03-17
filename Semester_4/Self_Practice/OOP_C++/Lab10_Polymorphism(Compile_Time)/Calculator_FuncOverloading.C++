#include<iostream>
using namespace std;

class Calculator{
    public:
    int calculate(int a, int b){
        return a+b;
    }

    double calculate(double a, double b, double c){
        return a*b*c;
    }

    double calculate(double base, int exp){
        double power = 1.0;
        for(int i=0; i<exp; i++){
            power *= base;
        }
        return power;
    }
};

int main(){
    Calculator c;
    cout<<"Integer addition: "<<c.calculate(2,8)<<endl;
    cout<<"Float multiplication: "<<c.calculate(2.2, 4.5, 8.6)<<endl;
    cout<<"Power: "<<c.calculate(5.2,3)<<endl;
}