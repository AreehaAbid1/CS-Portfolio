#include <iostream>
using namespace std;

class Course {
private:
    string name;
    string id;
    double fee;
    static int totalCourses;

public:
    Course(string n, string i, double f) {
        name = n;
        id = i;
        fee = f;
        totalCourses++;
    }

    void setFee(double f) {
        fee = f;
    }

    double getFee() {
        return fee;
    }

    static int getTotalCourses() {
        return totalCourses;
    }

    void display() {
        cout << "Course: " << name << ", ID: " << id << ", Fee: " << fee << endl;
    }
};

int Course::totalCourses = 0;

int main() {
    Course c1("Programming", "CS101", 3000);
    Course c2("Math", "MATH123", 2500);
    c1.display();
    c2.display();
    cout << "Total Available Courses: " << Course::getTotalCourses() << endl;
    return 0;
}
