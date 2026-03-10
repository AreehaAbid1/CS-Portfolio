Create DATABASE customers111;
use customers111;
create table Customer (
CustomerId INT Identity(1,1) primary key,
CustomerName varchar(100),
Age int,
Area varchar (100),
City varchar(100),
PostalCode int,
Country varchar(100));
insert into Customer values
('Taha', 36, 'North Karachi', 'Karachi', 05021, 'Pakistan'),
('Faheem', 26, 'Gulshan', 'Karachi', 05023, 'Pakistan'),
('John', 32, 'Stanmore', 'London', 55953, 'UK'),
('Iqbal', 20, 'Model Town', 'Lahore', 95866, 'Pakistan'),
('Rohit', 45, 'Gorakhpur', 'Ahmedabad', 12209, 'India');
Select * from Customer;
--task1--
select * from Customer WHERE Country = 'Pakistan' AND City = 'Karachi';
--task 2--
Select * FRom Customer where Country = 'India' OR Area = 'Model Town' OR City = 'London';
--task 3--
select * from Customer
where City <> 'Karachi'
AND City <> 'Lahore';
--task 4--
select CustomerName, Area, City, Country from Customer where (Country <> 'India' OR Country <> 'UK') AND Area = 'Gulshan';
--task 5--
select CustomerId, CustomerName, Age, Country from Customer ORDER BY Age DESC;
--task 6--
select CustomerName, Age, City, Country from Customer where Age between 25 AND 35 ORDER BY CustomerName ASC;
--task 7--
select CustomerId, CustomerName, CONCAT(City,', ', Country) AS Residence from Customer;
--task 8--
SELECT CustomerName + ' ' + 'lives in ' + '' + City + ' at ' + '' + Area AS Sentence from Customer;