create database student15;
use student15;
create table Student(
RollNo Int identity(101,1) Primary key,
StName varchar(100),
Age int,
CGPA float,
City varchar(50));
Insert into Student Values
('Maaz', 20, 3.5, 'Karachi'),
('Waqas', 18, 2.5, 'Islamabad'),
('Talha', 19, 3.0, 'Karachi'),
('Jibran', 21, 3.7, NULL),
('Waqar', 19, 2.8, 'Islamabad'),
('Aamir', 24, 3, NULL);
SELECT StName FRom Student where StName = 'Maaz' OR StName = 'Jibran';
SELECT StName From Student Where StName LIKE '%T%';
Select StName From Student where CGPA BETWEEn 2.0 AND 3.0;
Select * from Student where Age>=20;
select * from Student Where StName LIKE 'A%R';
select * from Student where City = 'Islamabad';
Select * from Student WHERE City IS NuLL;