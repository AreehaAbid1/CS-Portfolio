#include <iostream>
using namespace std;

class Student {
    int marks[5];
public:
    Student() {
        for (int i = 0; i < 5; i++)
            marks[i] = 0;
    }

    int& operator[](int index) {
        return marks[index];
    }

    void display() {
        int total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << total / 5.0 << endl;
    }
};

int main() {
    Student s;
    for (int i = 0; i < 5; i++) {
        cout << "Enter mark for subject " << i + 1 << ": ";
        cin >> s[i];
    }
    s.display();
    return 0;
}
