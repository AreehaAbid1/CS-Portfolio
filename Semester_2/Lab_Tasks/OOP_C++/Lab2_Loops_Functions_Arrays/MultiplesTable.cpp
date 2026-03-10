#include<iostream>
using namespace std;
int main(){
	int i,j;	
	int num;
	int table[20][10];
	int count = 1;
	cout<<"Enter a number: ";
	cin>>num;
	for(i=0; i<20; i++){
		for(j=0; j<10; j++){
		int result = num*count;
		table[i][j] = result;
		cout << result << "\t";
		count++;	
		}
		cout<< endl;
	}
return 0;
}