#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string searchName, name;
    float grade;
    bool found = false;

    cout << "Enter name to search: ";
    cin >> searchName;

    ifstream file("grades.txt");
    while (file >> name >> grade) {
        if (name == searchName) {
            cout << "Grade of " << name << " is: " << grade << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found." << endl;
    }

    return 0;
}
