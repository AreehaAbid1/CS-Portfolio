Create database Employeess;
use Employeess;

Create table Employee(
EmpId INT Identity(1, 1) PRIMARY KEY,
FirstName varchar(100),
LastName varchar(100),
Title varchar(100),
DeptId Int,
Email varchar(100),
Phone INT );

INSERT INTO Employee VALUES
('Amna','Saif','Teacher', 101, 'amnasaif@gmail.com', 934876),
('Wali', 'Ahmed', 'Teacher', 576, 'Wali.y@gmail.com', 764789),
('Hania', 'Khan', 'Principal', 282, 'HaniaAmir@gmail.com', 34228);

SELECT * FROM Employee;

ALTER table Employee
ADD Salary int, WorkingHours INT;

UPDATE Employee
SET Salary = 22000, WorkingHours = 10
Where Title = 'Teacher';

UPDATE Employee
SET Salary = 40000, WorkingHours = 8
Where title = 'Principal';

SELECT * From Employee;

Select EmpId, FirstName, Title FROM Employee
Where Salary = 22000;

Select FirstName,Title, WorkingHours*60 AS WorkingMinutes FROM Employee;

Select EmpId, FirstName, LastName, Salary*0.10 AS Increment From Employee;

Select * From Employee Where DeptId = 101;

Update Employee
Set DeptId = 4
Where EmpId = 2;

Select * From Employee WHERE EmpId = 2;

delete Employee
Where Phone = 764789;

SELECT * from Employee;

