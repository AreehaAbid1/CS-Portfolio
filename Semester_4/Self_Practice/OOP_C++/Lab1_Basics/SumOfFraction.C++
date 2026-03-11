#include<iostream>
using namespace std;
int main(){
    float num1, num2, den1, den2;
    cout<<"Enter numerator 1, denomenator 1, numerator 2 and denomenator 2"<<endl;
    cin>>num1>>den1>>num2>>den2;
    cout<<((num1*den2)+(den1*num2))<<"/"<<den1*den2<<endl;
    return 0;
}