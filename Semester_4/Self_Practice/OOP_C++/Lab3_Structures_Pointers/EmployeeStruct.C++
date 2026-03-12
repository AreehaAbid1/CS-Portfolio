// 2. Create a structure called employee that contains two members: an employee number (type
// int) and the employee’s compensation (in dollars; type float). Ask the user to fill in this
// data for three employees, store it in three variables of type struct employee, and then
// display the information for each employee.

#include<iostream>
using namespace std;

struct Employee{
    int empNum;
    float empCompensation;
};

int main(){
    Employee emp1, emp2, emp3;
     cout<<"Enter data for employee 1: "<<endl;
     cin>>emp1.empNum>>emp1.empCompensation;
     cout<<"---EMPLOYEE 1 DATA---"<<endl<<"Employee Number: "<<emp1.empNum<<endl<<"Employee Compensation: "<<emp1.empCompensation<<endl<<endl;

      cout<<"Enter data for employee 2: "<<endl;
     cin>>emp2.empNum>>emp2.empCompensation;
     cout<<"---EMPLOYEE 2 DATA---"<<endl<<"Employee Number: "<<emp2.empNum<<endl<<"Employee Compensation: "<<emp2.empCompensation<<endl<<endl;

      cout<<"Enter data for employee 3: "<<endl;
     cin>>emp3.empNum>>emp3.empCompensation;
     cout<<"---EMPLOYEE 3 DATA---"<<endl<<"Employee Number: "<<emp3.empNum<<endl<<"Employee Compensation: "<<emp3.empCompensation<<endl<<endl;
}