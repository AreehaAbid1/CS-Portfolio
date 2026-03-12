// 4. Write a program that reads a group of numbers from the user and places them in an array
// of type float. Once the numbers are stored in the array, the program should average them
// and print the result. Use pointer notation wherever possible.
 
#include<iostream>
using namespace std;
int main(){
    float array[5];
    int i;
    float avg = 0.0;

    cout<<"Enter 5 decimal point values: "<<endl;
    for(i=0; i<5;i++){
        cin>>array[i];
        float* ptr[5];
        ptr[i] = &array[i];
        avg += *ptr[i]/5;
    }
    cout<<"Average: "<<avg<<endl;
    
}