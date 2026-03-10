#include<iostream>
using namespace std;

int main()
{
	char opt;
	float first;
	float second;
	char sign;
	float sum;
	
	do{
	cout <<"Dear user, enter 1st operand: " << endl;
	cin >> first;
	
	cout <<"Dear user, enter operator (+,-,*,/): " << endl;
	cin >> sign;
	
	cout <<"Dear user, enter 2nd operand: " << endl;
	cin >> second;
	
	switch(sign){
		case '+':
		sum = first+second;
		cout << " "<< sum << endl;
		break;
		
		case '-':
		sum = first-second;
		cout << " "<< sum << endl;
		break;
		
		case '*':
		sum = first*second;
		cout << " "<< sum << endl;
		break;
		
		case '/':
		sum = first/second;
		cout << " "<< sum << endl;
		break;
		
		default:
			cout << "Unknown operator!" << endl;
	}
	cout<<"Do you want to continue calculating? " << endl;
	cin >> opt;
	}while(opt=='y' || opt=='Y');
	
	return 0;
}