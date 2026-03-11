#include<iostream>
using namespace std;
int main(){
    float tempInCel;
    float tempInFar;
    cout<<"Dear user, enter temperature in Celsius:"<<endl;
    cin>>tempInCel;
    tempInFar = (tempInCel*9/5)+32;
    cout<<"Temperature afer converting to Fahrenheit: "<<tempInFar<<endl;
    return 0;
}