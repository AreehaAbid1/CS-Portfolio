#include<iostream>
using namespace std;

void reverseNum(int num){
    for(num; num>0;){
        int digit = num%10;
        cout<<digit;
        num=num/10;
    }
}

int main(){
    int number;
    cout<<"Dear user, enter a multi-digit number: ";
    cin>>number;
    reverseNum(number);
}