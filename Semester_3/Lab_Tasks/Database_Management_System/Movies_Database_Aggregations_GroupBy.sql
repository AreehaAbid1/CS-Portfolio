create database Movies1;
use Movies1; 
create table Movies(
MovieName varchar(100),
Rating varchar(100));
insert into Movies values
('Downtown Abbey A New Era', 'PG'),
('Men', 'R'),
('The Bad Guys', 'PG-13'),
('Top Gun Maverick', 'PG-13');
create table Shows(
ShowDate varchar(100),
ShowTime varchar(100),
MovieName varchar(100),
Genre varchar(100),
TotalGuest int,
TicketCost float);
insert into Shows values
('2023-09-27', '10:00:00', 'Top Gun Maverick', 'Action', 131, 18.00),
('2023-09-27', '10:00:00', 'Downtown Abbey A New Era', 'Drama', 90, 16.00),
('2023-09-27', '10:00:00', 'Men', 'Horror', 100, 15.00),
('2023-09-27', '10:00:00', 'The Bad Guys', 'Animation', 83, 13.00),
('2023-09-28', '09:00:00', 'Top Gun Maverick', 'Action', 112, 17.00),
('2023-09-28', '09:00:00', 'Downtown Abbey A New Era', 'Drama', 137, 15.00),
('2023-09-28', '09:00:00', 'Men', 'Horror', 25, 14.00),
('2023-09-28', '09:00:00', 'The Bad Guys', 'Animation', 142, 12.00),
('2023-09-28', '05:00:00', 'Top Gun Maverick', 'Action', 150, 16.00),
('2023-09-28', '05:00:00', 'Downtown Abbey A New Era', 'Drama', 118, 14.00),
('2023-09-28', '05:00:00', 'Men', 'Horror', 88, 13.00),
('2023-09-28', '05:00:00', 'The Bad Guys', 'Animation', 130, 11.00);
select MovieName, SUM(TicketCost) as AvgCost from Shows group by MovieName;
select Genre, sum(TotalGuest) as TotalGuest from Shows group by Genre;
select Rating, count(MovieName) as MovieName from Movies group by Rating;
select count(TotalGuest) as HundredPlusGuests from Shows WHERE TotalGuest>=100;
--Find the top 4 Movie_Name with the highest & lowest total guest count. Order SELECT MovieName, SUM(TotalGuest) AS TotalGuestCount
SELECT MovieName, SUM(TotalGuest) AS TotalGuestCount FROM Shows
GROUP BY MovieName
ORDER BY TotalGuestCount DESC;
select MovieName, Sum(TicketCost*TotalGuest) as Revenue from Shows group by MovieName order by Revenue DESC;
select Genre, AVG(TicketCost) as AverageTicketCost from Shows Group by Genre Having AVG(TicketCost)>12;