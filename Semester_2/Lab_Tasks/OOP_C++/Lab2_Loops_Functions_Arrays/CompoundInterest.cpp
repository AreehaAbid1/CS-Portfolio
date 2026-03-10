#include <iostream>
using namespace std;

int main() {
    float initialAmount, interestRate, amount;
    int no_of_years;

    cout << "Enter initial amount: ";
    cin >> initialAmount;
    cout << "Enter number of years: ";
    cin >> no_of_years;
    cout << "Enter interest rate: ";
    cin >> interestRate;

    amount = initialAmount;

    for (int i = 1; i <= no_of_years; i++) {
        amount = amount + (amount * (interestRate / 100));
    }

    cout << "At the end of " << no_of_years << " years, you will have " << amount << " Rupees." << endl;

    return 0;
}
