#include<iostream>
using namespace std;
int main(){
    float num1, num2;
    char operation;
    char choice;
    
    do{
        cout<<"Enter number 1 and number 2: "<<endl;
        cin>>num1>>num2;
        cout<<"Enter operators (+, -, *, /): "<<endl;
        cin>>operation;

        if(operation=='+'){
            cout<<"Addition: "<<num1+num2<<endl;
        }
        else if(operation=='-'){
            cout<<"Subtraction: "<<num1-num2<<endl;
        }
        else if(operation=='*'){
            cout<<"Multiplication: "<<num1*num2<<endl;
        }
        else if(operation=='/'){
            cout<<"Division: "<<num1/num2<<endl;
        }
        else{
            cout<<"Invalid Operation Choice"<<endl;
        }

        cout<<"Do you want to continue calculating? (y/n): "<<endl;
        cin>>choice;
    }
    while (choice=='y');
    
    return 0;
}