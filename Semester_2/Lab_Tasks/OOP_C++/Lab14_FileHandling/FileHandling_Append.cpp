#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    ofstream file("userdata.txt", ios::app);
    file << name << endl;
    file << age << endl;
    file.close();

    string readName;
    int readAge;
    ifstream readFile("userdata.txt");
    while (getline(readFile, readName)) {
        readFile >> readAge;
        readFile.ignore();
        cout << "Name: " << readName << ", Age: " << readAge << endl;
    }

    return 0;
}
