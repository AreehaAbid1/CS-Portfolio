#include <iostream>
#include <string>
using namespace std;

void generateInvoice(string item, int quantity, double pricePerUnit) {
    double total = quantity * pricePerUnit;
    cout << quantity << " " << item << "(s) at $" << pricePerUnit << " each: $" << total << endl;
}

void generateInvoice(string item, double weight, double pricePerKg) {
    double total = weight * pricePerKg;
    cout << weight << " kg of " << item << " at $" << pricePerKg << " per kg: $" << total << endl;
}

int main() {
    generateInvoice("Pen", 3, 2.0);
    generateInvoice("Apples", 1.5, 4.1);

    return 0;
}
