create database Employee22;
use Employee22;
create table Employee(
EmpId int identity(1,1) Primary key,
FirstName varchar(100),
LastName varchar(100),
Title varchar(100),
DeptId int,
Email varchar(100),
Phone int);
insert into Employee values
('Joe', 'Jones', 'Engineer', 3, 'jjones', 5844),
('Ken', 'Davis', 'Manager', 4, 'kdavis', 5854),
('Mary', 'Baker', 'Engineer', 3, 'mabaker', 5876),
('John', 'Smith', 'Engineer', 3, 'jsmith', 5833),
('Jane', 'Morris', 'Manager', 3, 'jmorris', 5833);
ALTER table Employee
add Salary int, WorkingHours int;
update Employee 
set Salary = 20000, WorkingHours=8
where Title = 'Engineer';
update Employee 
set Salary = 40000, WorkingHours=10
where Title = 'Manager';
select EmpId, FirstName, LastName from Employee where Salary=20000;
select concat(FirstName, ' is my name and ',LastName, ' is my dads name') AS sentence from Employee;