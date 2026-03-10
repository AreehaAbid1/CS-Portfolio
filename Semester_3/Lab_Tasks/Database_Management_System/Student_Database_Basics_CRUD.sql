CREATE DATABASE Student1;
USE Student1;
CREATE table Student(
FirstName varchar (100),
Class int,
Program varchar(100));
INSERT into Student VALUES
('Areeha', 14, 'CS'),
('Fareeha', 11, 'Bio'),
('Areeba', 16, 'SE');
SELECT * FROM Student;