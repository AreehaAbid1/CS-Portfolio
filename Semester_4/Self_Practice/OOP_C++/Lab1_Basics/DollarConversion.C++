#include<iostream>
using namespace std;
int main(){
    float britishPound = 1.487;
    float frenchFranc = 0.172;
    float germanDeut = 0.584;
    float japaneseYen = 0.00955;
    float dollars;
    cout<<"Enter amount in dollars: "<<endl;
    cin>>dollars;
    cout<<endl;
    cout<<"---After Conversion---"<<endl<<endl;
    cout<<dollars<<" Dollars to Pounds: "<<dollars*britishPound<<endl;
    cout<<dollars<<" Dollars to Franc: "<<dollars*frenchFranc<<endl;
    cout<<dollars<<" Dollars to Deut: "<<dollars*germanDeut<<endl;
    cout<<dollars<<" Dollars to Yen: "<<dollars*japaneseYen<<endl;
    return 0;
}