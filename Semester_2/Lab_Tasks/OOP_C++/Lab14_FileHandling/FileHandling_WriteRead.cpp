#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    ofstream file("userdata.txt");
    file << name << endl;
    file << age << endl;
    file.close();

    string readName;
    int readAge;
    ifstream readFile("userdata.txt");
    getline(readFile, readName);
    readFile >> readAge;
    readFile.close();

    cout << "Name: " << readName << endl;
    cout << "Age: " << readAge << endl;

    return 0;
}
