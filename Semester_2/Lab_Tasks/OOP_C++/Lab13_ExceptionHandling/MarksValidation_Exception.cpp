#include <iostream>
using namespace std;

void validateMarks(int marks) {
    if (marks < 0 || marks > 100) {
        throw "Invalid input: Marks should be between 0 and 100";
    }
}

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    try {
        validateMarks(marks);
        cout << "Marks entered: " << marks << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}