#include <iostream>
using namespace std;
int main() {
double dollars;
cout << "Enter amount in dollars: ";
cin >> dollars;
cout << "British Pound: " << dollars * 1.487 << endl;
cout << "French Franc: " << dollars * 0.172 << endl;
cout << "German Deutschemark: " << dollars * 0.584 << endl;
cout << "Japanese Yen: " << dollars * 0.00955 << endl;
return 0;
}