#include<iostream>
using namespace std;

int main()
{
	int opt;
	float far;
	float cel;
	
	cout << "Enter 0 for converting farenhite to celsius and Enter 1 for converting celsius to farenhite" << endl;
	cin >> opt;
	
	if(opt==0){
		cout << "Enter temperature in fahrenheit:" << endl;
		cin >> far;
		cel = (5.0/9)*(far-32);
		cout<< "Temperature in celsius is " << cel << endl;
	}
	else if(opt==1){
		cout << "Enter temperature in celsius:" << endl;
		cin >> cel;
		far = (cel * 9.0/5) + 32;
		cout<< "Temperature in fahrenheit is " << far << endl;
	}
	else{
		cout << "Only options 0 and 1 are valid!" << endl;
	}
	return 0;
}