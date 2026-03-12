// 1. A phone number, such as (212) 767-8900, can be thought of as having three parts: the area
// code (212), the exchange (767), and the number (8900). Write a program that uses a
// structure to store these three parts of a phone number separately. Call the structure phone.
// Create two structure variables of type phone. Initialize one, and have the user input a
// number for the other one. Then display both numbers. The interchange might look like this:
// Enter your area code, exchange, and number: 415 555 1212
// My number is (212) 767-8900
// Your number is (415) 555-1212

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