#include <iostream>
using namespace std;

void checkEligibility(int age) {
    if (age < 18) {
        throw "Age is below 18. Not eligible for license.";
    }
}

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        checkEligibility(age);
        cout << "You are eligible for a driving license." << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}
