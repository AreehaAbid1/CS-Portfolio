#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int count = 1;
    for(int i=0; i<20; i++){
        for(int j=0; j<10; j++){
            cout<<num*count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}