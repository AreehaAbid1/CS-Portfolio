create database lab10;
use lab10;
create table Salesman(
salesman_id int not null primary key,
salesman_Name varchar(50),
city varchar(50),
earning int);

create table Customer(
cust_id int,
Cust_name varchar(50),
City varchar(50),
salesman_id int,
Foreign key (salesman_id) references  Salesman(salesman_id));

INSERT INTO Salesman (salesman_id, salesman_Name, City, Earning)
VALUES
('001', 'Selim', 'Ankara', 2020),
('002', 'Anderson', 'London', 3680),
('005', 'Erik', 'Berlin', 2995),
('006', 'Walter', 'Stockholm', 4390),
('003', 'Khaled', 'Amman', 3970),
('007', 'Paul', 'London', 5800);

INSERT INTO Customer (cust_id, cust_name, City, salesman_id)
VALUES
(3002, 'Nick', 'New York', '001'),
(3005, 'Graham', 'California', '002'),
(3007, 'Brad', 'London', '005'),
(3007, 'Johns', 'Paris', '001'),
(3009, 'Johns', 'New York', '001'),
(3008, 'Julian', 'Berlin', '002'),
(3003, 'Jozy', 'London', '007');

select * from Customer;
select * from Salesman;

--task1
create CLUSTERED INDEX cluster1 ON Customer (cust_name);
select * from Customer;

--task2
create NONCLUSTERED INDEX cluster0002 ON Salesman (salesman_id);
select * from Salesman;

--task3
create NONCLUSTERED INDEX cluster003 ON Customer (cust_id ASC);
select * from Customer;

--task4
drop index cluster1 on Customer;

--task5
execute sp_helpindex Customer;
execute sp_helpindex Salesman;