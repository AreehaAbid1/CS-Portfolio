#include<iostream>
using namespace std;
int main(){
    int numOfGuests;
    int numOfChairs;
    cout<<"Enter number of guests:";
    cin>>numOfGuests;
    cout<<"Enter number of chairs:";
    cin>>numOfChairs;
    cout<<"POSSIBLE SEATING ARRANGEMENTS"<<endl;
    int sum = numOfGuests;
    for(int i=numOfGuests-1; i>=numOfChairs-1; i--){
        sum*=i;
        
    }
    cout<<sum;
    return 0;
}