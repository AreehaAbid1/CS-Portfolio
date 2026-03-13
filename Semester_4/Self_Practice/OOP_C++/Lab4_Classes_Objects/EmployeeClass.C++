#include<iostream>
using namespace std;

class Employee{
    private:
    int EmpID;
    float EmpSalary;
    public:

    //default constructor
    Employee(){ }
    
    //takeData method
    void inputData(){
        cout<<"Enter Employee ID: ";
        cin>>EmpID;
        cout<<"Enter Employee Salary: ";
        cin>>EmpSalary;
    }

    //display method
    void display(){
        cout<<endl<<"---Employee Details---"<<endl;
        cout<<"Employee ID:\t\t"<<EmpID<<endl;
        cout<<"Employee Salary:\t"<<EmpSalary<<endl;
    }
};

int main(){
    Employee e1, e2, e3;
    cout<<"Employee 1"<<endl;
    e1.inputData();
    e1.display();
    cout<<"Employee 2"<<endl;
    e2.inputData();
    e2.display();
    cout<<"Employee 3"<<endl;
    e3.inputData();
    e3.display();
}