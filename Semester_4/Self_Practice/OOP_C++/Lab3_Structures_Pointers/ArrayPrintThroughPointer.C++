// 5. Write a C++ program that declares an array of integers and uses a pointer to traverse the
// array. Use pointer arithmetic to print each element of the array.
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr[5];
    for(int i=0; i<5; i++){
        ptr[i] = &arr[i];
        cout<<*ptr[i]<<endl;
    }
}