#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("grades.txt");
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    string name;
    float grade;

    for (int i = 0; i < n; i++) {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter grade: ";
        cin >> grade;
        cin.ignore();
        file << name << " " << grade << endl;
    }
    file.close();

    ifstream readFile("grades.txt");
    while (readFile >> name >> grade) {
        cout << "Student: " << name << ", Grade: " << grade << endl;
    }

    return 0;
}
