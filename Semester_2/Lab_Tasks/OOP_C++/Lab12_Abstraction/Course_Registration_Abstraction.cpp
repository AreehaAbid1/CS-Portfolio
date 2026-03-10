#include <iostream>
using namespace std;

class Course {
public:
    virtual void registerCourse() = 0;
};

class MathCourse : public Course {
public:
    void registerCourse() override {
        cout << "Registering for Math Course..." << endl;
        cout << "Checking prerequisites..." << endl;
        cout << "Checking seat availability..." << endl;
        cout << "Math Course registered successfully!" << endl;
    }
};

class ProgrammingCourse : public Course {
public:
    void registerCourse() override {
        cout << "Registering for Programming Course..." << endl;
        cout << "Validating prerequisites..." << endl;
        cout << "Verifying instructor assignment..." << endl;
        cout << "Programming Course registered successfully!" << endl;
    }
};

int main() {
    Course* c;
    MathCourse m;
    ProgrammingCourse p;

    c = &m;
    c->registerCourse();

    cout << endl;

    c = &p;
    c->registerCourse();

    return 0;
}