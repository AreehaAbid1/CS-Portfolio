#include<iostream>
using namespace std;
struct Phone{
    int areaCode;
    int exchangeCode;
    int number;
};

int main(){
    Phone var1;
    Phone var2;

    var1.areaCode = 212;
    var1.exchangeCode = 767;
    var1.number = 8900;

    cout<<"My number: ("<<var1.areaCode<<") "<<var1.exchangeCode<<"-"<<var1.number<<endl;

    cout<<"Enter area code, exchange code and number: "<<endl;
    cin>>var2.areaCode>>var2.exchangeCode>>var2.number;

    cout<<"Your number: ("<<var2.areaCode<<") "<<var2.exchangeCode<<"-"<<var2.number<<endl;
}