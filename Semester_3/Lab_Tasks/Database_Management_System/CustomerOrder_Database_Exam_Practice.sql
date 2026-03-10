create database CustomerOrderDB11s;
use CustomerOrderDB11s;
create table CustomerOrder(
OrderId INT Identity(123,1) Primary key,
CustomerName varchar(100),
City varchar(100),
Country varchar(100),
ProductName varchar(100),
Quantity INT,
Price FLOAT,
OrderDate varchar(100));
insert into CustomerOrder VALUES
('Areeha', 'Karachi', 'Pakistan', 'Lipstick', 3, 1500, '2024-12-10'),
('Taha', 'Lahore', 'Pakistan', 'Laptop', 1, 90000, '2024-11-15'),
('John', 'London', 'UK', 'Perfume', 2, 4000, '2024-10-02'),
('Priya', 'Mumbai', 'India', 'Handbag', 1, 8000, '2024-12-01'),
('Rohit', 'Ahmedabad', 'India', 'Watch', 2, 12000, '2024-09-30'),
('Sara', 'Karachi', 'Pakistan', 'Foundation', 1, 2500, '2024-11-22'),
('Faheem', 'London', 'UK', 'Headphone', 2, 6000, '2024-12-05');

 Alter table CustomerOrder
 Add Discount INT CHECK (Discount BETWEEN 5 and 20), DeliveryCharges INT CHECK (DeliveryCharges between 200 and 500);

 UPDATE CustomerOrder
 SET Discount = 10, DeliveryCharges = 300
 WHERE Price BETWEEn 1000 and 6000;

 UPDATE CustomerOrder
 SET Discount = 15, DeliveryCharges = 400
 WHERE Price BETWEEn 6001 and 20000;

 UPDATE CustomerOrder
 SET Discount = 20, DeliveryCharges = 500
 WHERE Price >20000;

 SELECT * from CustomerOrder; 

 SELECT * FROM CustomerOrder WHERE (Country = 'Pakistan' and City = 'Karachi') and Price>2000;

 SELEct CustomerName, ProductName, Quantity*Price AS TotalAmount From CustomerOrder;

 SELECT * FROM CustomerOrder where Country = 'India' or City = 'London';

 SELECT * FROM CustomerOrder WHERE Country NOT IN ('UK') and (Discount>10);

 SELECT * FROM CustomerOrder where CustomerName LIKE 'A%a';

Select CustomerName, ProductName, Price+(DeliveryCharges-Discount) AS TotalCost from CustomerOrder;

Select * from CustomerOrder where Quantity Between 1 and 2 Order by CustomerName ASC;

Select City + '' + ', ' + '' + Country AS Residense FROM CustomerOrder;

SELECT Concat(City, ', ', Country) AS Residense FROM CustomerOrder;

UPDATE CustomerOrder
set DeliveryCharges = 499
where City = 'London';

SELECT City,DeliveryCharges from CustomerOrder where City='London';

DELETE CustomerOrder where Price<2000;

SELECT * From CustomerOrder Order By Price DESC;

--aggregate functions

select COUNT(CustomerName) as TotalCustomers From CustomerOrder;

select COUNT(*) as TotalCustomers From CustomerOrder;

select SUM(Price) AS TotalSales from CustomerOrder;

select avg(Price) AS AverageSales from CustomerOrder;

select max(Quantity) AS MostSoldProducts, Country from CustomerOrder group by Country order by Country ASC;

select max(Quantity) AS MostSold FROM CustomerOrder;

select min(Quantity) AS MostSold FROM CustomerOrder;