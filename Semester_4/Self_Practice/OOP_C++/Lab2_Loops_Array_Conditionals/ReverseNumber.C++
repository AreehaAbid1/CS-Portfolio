#include<iostream>
#include<string>
using namespace std;

void reverseNum(int num){
    cout<<"Reversed Number: "<<endl;
    while(num>0){
        int digit = num % 10;
        cout<<digit<<endl;
        num = num/10;
    }
}

int main(){
    reverseNum(123);
    return 0;
}