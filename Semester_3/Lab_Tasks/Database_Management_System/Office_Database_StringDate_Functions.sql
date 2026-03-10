CREATE DATABASE OfficeDB1;
USE OfficeDB1;
CREATE TABLE employee (
    Emp_ID INT PRIMARY KEY,
    Name VARCHAR(50),
    Birth_date DATE,
    Gender CHAR(1),
    Salary INT,
    Acc_No BIGINT,
    Phone VARCHAR(20),
    Branch_ID INT
);
CREATE TABLE branch (
    Branch_ID INT PRIMARY KEY,
    Branch_name VARCHAR(50),
    Mgr_ID INT,
    Mgr_start_date DATE,
    Mgr_end_date DATE
);
CREATE TABLE client (
    Client_ID INT PRIMARY KEY,
    Client_name VARCHAR(50),
    Branch_ID INT
);
CREATE TABLE works_with (
    Emp_ID INT,
    Client_ID INT,
    Sales INT
);
CREATE TABLE branch_supplier (
    Branch_ID INT,
    Supplier_name VARCHAR(50),
    Supply_type VARCHAR(50)
);
INSERT INTO employee VALUES
(100, 'Jan Levinson',  '1961-05-11', 'F', 110000, 1000001, '+12345678', 1),
(101, 'Michael Scott', '1964-03-15', 'M', 75000,  1000012, '+18765432', 2),
(102, 'Josh Porter',   '1969-09-05', 'M', 78000,  1000000, '+10987678', 3),
(103, 'Angela Martin', '1971-06-25', 'F', 63000,  1000001, '+10123221', 2),
(104, 'Andy Bernard',  '1973-07-22', 'M', 65000,  1012112, '+10967231', 3),
(105, 'Jim Halpert',   '1978-10-01', 'M', 71000,  1002198, '+10987123', 3),
(106, 'Kelly Kapoor',  '1980-02-05', 'F', 51000,  1011201, '+11111111', 2),
(107, 'Stanley Hudson','1958-02-19', 'M', 69000,  1010004, '+12222221', 2),
(108, 'David Wallace', '1967-11-17', 'M', 250000, 1000009, '+10922922', 1);
INSERT INTO branch VALUES
(1, 'Scranton', 101, '2020-06-10', '2028-01-01'),
(2, 'Stamford', 102, '2020-02-13', '2025-01-01'),
(3, 'Corporate',108, '2020-02-09', '2029-01-01');
INSERT INTO client VALUES
(400, 'Dunmore High School', 2),
(401, 'Lackawana County',    2),
(402, 'FedEx',               3),
(403, 'John Daly Law, LLC',  3),
(404, 'Scranton Whitepages', 2),
(405, 'Times Newspaper',     3);
INSERT INTO works_with VALUES
(107, 401, 55000),
(101, 402, 267000),
(105, 403, 22000),
(104, 404, 5000),
(105, 404, 12000),
(107, 405, 33000),
(108, 406, 26000),
(101, 401, 15000),
(107, 401, 130000);
INSERT INTO branch_supplier VALUES
(2, 'Hammer Mill',    'Paper'),
(3, 'Patriot Paper',  'Paper'),
(2, 'J.T. Forms & Labels', 'Custom Forms'),
(3, 'Uni-ball',       'Writing Utensils'),
(3, 'Hammer Mill',    'Paper'),
(3, 'Stamford',       'Custom Forms');
--task1
SELECT LEFT(Name, 5) AS Left5Characters
FROM employee;
--task2
SELECT Emp_ID, Name, LEN(Name) AS NameLength
FROM employee
WHERE Name = 'Michael Scott';
--task3
SELECT Client_ID,
       Client_Name,
       ASCII(LEFT(Client_Name, 1)) AS ASCII_First_Char
FROM client;
--task4
SELECT GETDATE() AS MyDateTime,
       DATEADD(DAY, 30, GETDATE()) AS After30Days;
--task5
SELECT HOST_NAME() AS HostName,
       SUSER_NAME() AS UserName,
       APP_NAME() AS AppName;
--task6
UPDATE branch
SET Mgr_end_date = DATEADD(YEAR, 3, Mgr_end_date)
WHERE YEAR(Mgr_end_date) = 2024;
--task7
UPDATE employee
SET Phone = STUFF(Phone, 1, 1, '')
WHERE Phone LIKE '+%';
--task8
SELECT UPPER(Branch_name) AS BranchNameUpper
FROM branch;