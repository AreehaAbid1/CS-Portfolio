CREATE DATABASE Movies5;
USE Movies5;

CREATE TABLE Tbl_Movie (
    Movie_Name VARCHAR(100),
    Rating VARCHAR(10)
);

INSERT INTO Tbl_Movie VALUES
('Downtown Abbey A New Era', 'PG'),
('Men', 'R'),
('The Bad Guys', 'PG-13'),
('Top Gun Maverick', 'PG-13');

CREATE TABLE Tbl_Shows (
    Show_Date DATE,
    Show_Time TIME,
    Movie_Name VARCHAR(100),
    Genre VARCHAR(50),
    Total_Guest INT,
    Ticket_Cost FLOAT
);

INSERT INTO Tbl_Shows VALUES
('2023-09-27','10:00:00','Top Gun Maverick','Action',131,18.00),
('2023-09-27','10:00:00','Downtown Abbey A New Era','Drama',90,16.00),
('2023-09-27','10:00:00','Men','Horror',100,15.00),
('2023-09-27','10:00:00','The Bad Guys','Animation',83,13.00),
('2023-09-28','09:00:00','Top Gun Maverick','Action',112,17.00),
('2023-09-28','09:00:00','Downtown Abbey A New Era','Drama',137,15.00),
('2023-09-28','09:00:00','Men','Horror',25,14.00),
('2023-09-28','09:00:00','The Bad Guys','Animation',142,12.00),
('2023-09-28','05:00:00','Top Gun Maverick','Action',150,16.00),
('2023-09-28','05:00:00','Downtown Abbey A New Era','Drama',118,14.00),
('2023-09-28','05:00:00','Men','Horror',88,13.00),
('2023-09-28','05:00:00','The Bad Guys','Animation',130,11.00);

--task1
SELECT Movie_Name, AVG(Ticket_Cost) AS AvgCost
FROM Tbl_Shows
GROUP BY Movie_Name;

--task2
SELECT Genre, SUM(Total_Guest) AS TotalGuest
FROM Tbl_Shows
GROUP BY Genre;

--task3
SELECT Rating, COUNT(Movie_Name) AS MovieCount
FROM Tbl_Movie
GROUP BY Rating;

--task4
SELECT Movie_Name,
       Total_Guest,
       (Total_Guest + 100) AS Plus100Guests
FROM Tbl_Shows
WHERE Total_Guest >= 100;

--task5
SELECT TOP 4 Movie_Name,
       SUM(Total_Guest) AS TotalGuests
FROM Tbl_Shows
GROUP BY Movie_Name
ORDER BY TotalGuests DESC;

--task6
SELECT Movie_Name,
       SUM(Total_Guest * Ticket_Cost) AS Revenue
FROM Tbl_Shows
GROUP BY Movie_Name
ORDER BY Revenue DESC;

--task7
SELECT Genre,
       AVG(Ticket_Cost) AS AvgTicketCost
FROM Tbl_Shows
GROUP BY Genre
HAVING AVG(Ticket_Cost) > 12;
