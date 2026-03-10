#include <iostream>
using namespace std;

struct Employee {
    int empNumber;
    float compensation;
};

int main() {
    Employee emp1, emp2, emp3;

    cout << "Enter employee number and compensation for employee 1: ";
    cin >> emp1.empNumber >> emp1.compensation;

    cout << "Enter employee number and compensation for employee 2: ";
    cin >> emp2.empNumber >> emp2.compensation;

    cout << "Enter employee number and compensation for employee 3: ";
    cin >> emp3.empNumber >> emp3.compensation;

    cout << "\nEmployee Details:\n";
    cout << "Employee 1: #" << emp1.empNumber << ", $" << emp1.compensation << endl;
    cout << "Employee 2: #" << emp2.empNumber << ", $" << emp2.compensation << endl;
    cout << "Employee 3: #" << emp3.empNumber << ", $" << emp3.compensation << endl;

    return 0;
} 
