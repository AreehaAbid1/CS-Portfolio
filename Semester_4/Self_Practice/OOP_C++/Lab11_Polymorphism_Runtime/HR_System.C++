// 2)	In a company's HR system, bonuses are calculated differently based on the employee's role.
// Managers receive a performance-based bonus, Engineers get a skill-level-based bonus, and Interns
// may not receive any bonus.
// Create a base class Employee with a virtual function calculateBonus(). Derive classes
// like Manager, Engineer, and Intern that override this function to implement their own bonus logic.
// Use pointers or references to the base class to demonstrate runtime polymorphism using virtual
// functions.
#include<iostream>
using namespace std;

class Employee{
    private:
    double salary;
    public:
    Employee(double s){
        salary = s;
    }
    virtual void CalculateBonus(){
        cout<<"Salary: "<<salary<<endl;
    }
    virtual void display(){
        
    }
    //getter
    double getSalary(){
        return salary;
    }
};

class Manager : public Employee{
    private:
    float performanceBasedBonus;
    double ManagerBonus = 0.0;
    public:
    Manager(double s, float pbb) : Employee(s){
        performanceBasedBonus = pbb;
    }
    void CalculateBonus() override {
        ManagerBonus = getSalary() * performanceBasedBonus/100;
        ManagerBonus += getSalary();
    }
    void display() override {
        cout<<"Manager's salary before bonus: "<<getSalary()<<endl;
        cout<<"---MANAGER'S SALARY AFTER BONUS: "<<ManagerBonus<<" ---"<<endl;
    }
};

class Engineer : public Employee{
    private:
    float skillBasedBonus;
    double EngineerBonus = 0.0;
    public:
    Engineer(double s, float sbb) : Employee(s){
        skillBasedBonus = sbb;
    }
    void CalculateBonus() override {
        EngineerBonus = getSalary() * skillBasedBonus/100;
        EngineerBonus += getSalary();
    }
    void display() override {
        cout<<"Engineer's salary before bonus: "<<getSalary()<<endl;
        cout<<"---ENGINEER'S SALARY AFTER BONUS: "<<EngineerBonus<<" ---"<<endl;
    }
};

class Intern : public Employee{
    public:
    Intern(double s) : Employee(s){

    }
    void CalculateBonus()override{
        cout<<"Bonus: 0"<<endl;
    }
    void display()override{
        cout<<"---INTERN'S SALARY: "<<getSalary()<<" ---"<<endl;
    }
};

int main(){
    Employee* e;
    Manager m(120000, 12.5);
    Engineer eng(98000.987, 15.3);
    Intern i(25000);
    e = &m;
    e->CalculateBonus();
    e->display();
    e = &eng;
    e->CalculateBonus();
    e->display();
    e = &i;
    e->CalculateBonus();
    e->display();
}