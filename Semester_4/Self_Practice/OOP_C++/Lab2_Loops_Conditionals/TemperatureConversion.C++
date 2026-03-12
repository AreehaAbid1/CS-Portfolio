#include<iostream>
using namespace std;

void celToFar(float cel){
    cout<<"Temperature in Fahrenheit: "<<(cel*9/5)+32;
}

void farToCel(float far){
    cout<<"Temperature in Celsius: "<<(far-32)*5/9;
}

int main(){
    float Celsius, Fahrenheit;
    int choice;

    cout<<"To convert Celsius to Fahrenheit enter 0\nTo convert Fahrenheit to Celsius enter 1"<<endl;
    cin>>choice;

    if(choice==0){
        cout<<"Enter temperature in Celsius: ";
        cin>>Celsius;
        celToFar(Celsius);
    }
    else if(choice==1){
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>Fahrenheit;
        farToCel(Fahrenheit);
    }
    else{
        cout<<"Invalid choice"<<endl;
    }

    return 0;
}