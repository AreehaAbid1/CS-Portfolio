#include <iostream>
using namespace std;

class Employee {
protected:
    double salary;
public:
    Employee(double sal) {
        salary = sal;
    }

    virtual double calculateBonus() = 0;
};

class Manager : public Employee {
    double performanceRating;
public:
    Manager(double sal, double rating) : Employee(sal) {
        performanceRating = rating;
    }

    double calculateBonus() {
        return salary * performanceRating;
    }
};

class Engineer : public Employee {
    double skillLevel;
public:
    Engineer(double sal, double skill) : Employee(sal) {
        skillLevel = skill;
    }

    double calculateBonus() {
        return salary * (skillLevel / 10);
    }
};

class Intern : public Employee {
public:
    Intern(double sal) : Employee(sal) {}

    double calculateBonus() {
        return 0;
    }
};

int main() {
    Employee* e1 = new Manager(50000, 0.20);
    Employee* e2 = new Engineer(50000, 1.0);
    Employee* e3 = new Intern(50000);

    cout << "Manager Bonus: " << e1->calculateBonus() << endl;
    cout << "Engineer Bonus: " << e2->calculateBonus() << endl;
    cout << "Intern Bonus: " << e3->calculateBonus() << endl;

    return 0;
}
