#include <iostream>
using namespace std;

class employee {
private:
    int empNumber;
    float empCompensation;
public:
    void getData() {
        cout << "Enter employee number: ";
        cin >> empNumber;
        cout << "Enter employee compensation: ";
        cin >> empCompensation;
    }
    void displayData() const {
        cout << "Employee Number: " << empNumber << endl;
        cout << "Compensation: " << empCompensation << endl;
    }
};

int main() {
    employee e1, e2, e3;
    e1.getData();
    e2.getData();
    e3.getData();
    e1.displayData();
    e2.displayData();
    e3.displayData();
    return 0;
}
