#include <iostream>
using namespace std;

struct Phone {
    int areaCode;
    int exchange;
    int number;
};

int main() {
    Phone myNumber = {212, 767, 8900};  // Pre-initialized
    Phone userNumber;

    cout << "Enter your area code, exchange, and number: ";
    cin >> userNumber.areaCode >> userNumber.exchange >> userNumber.number;

    cout << "My number is (" << myNumber.areaCode << ") " << myNumber.exchange << "-" << myNumber.number << endl;
    cout << "Your number is (" << userNumber.areaCode << ") " << userNumber.exchange << "-" << userNumber.number << endl;

    return 0;
}