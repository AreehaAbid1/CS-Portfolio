#include<iostream>
using namespace std;
int main(){
    float initialAmount, yearlyInsertRate;
    int numOfYears;

    cout<<"Enter intial amount: ";
    cin>>initialAmount;
    cout<<"Enter yearly interest rate: ";
    cin>>yearlyInsertRate;
    cout<<"Enter number of years: ";
    cin>>numOfYears;
    float amount = initialAmount;

    for(int i=1; i<=numOfYears; i++){
        amount = amount+(amount*(yearlyInsertRate/100));
        cout<<"At the end of year "<<i<<" you will have: "<<amount<<endl;
    }
    return 0;
}