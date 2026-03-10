-- CREATE DATABASE
CREATE DATABASE Lab_9;
USE Lab_9;

-- MOVIE TABLE
CREATE TABLE Movie (
    movie_id INT PRIMARY KEY,
    title VARCHAR(100),
    genre VARCHAR(50),
    runtime INT,
    year_of_release INT,
    renting_price DECIMAL(5,2)
);

-- CUSTOMER TABLE
CREATE TABLE Customer (
    customer_id INT PRIMARY KEY,
    name VARCHAR(100),
    country VARCHAR(50),
    gender VARCHAR(10),
    date_of_birth DATE,
    date_account_start DATE
);

-- RENTING TABLE
CREATE TABLE Renting (
    renting_id INT PRIMARY KEY,
    customer_id INT,
    movie_id INT,
    rating INT NULL,
    date_renting DATE,
    FOREIGN KEY (customer_id) REFERENCES Customer(customer_id),
    FOREIGN KEY (movie_id) REFERENCES Movie(movie_id)
);

-- INSERT MOVIE VALUES (Required or queries won't work)
INSERT INTO Movie VALUES
(1, 'Inception', 'Sci-Fi', 148, 2010, 5.00),
(2, 'Interstellar', 'Sci-Fi', 169, 2014, 6.00),
(3, 'The Dark Knight', 'Action', 152, 2008, 4.50),
(4, 'The Matrix', 'Sci-Fi', 136, 1999, 3.50),
(5, 'Titanic', 'Romance', 195, 1997, 4.00),
(6, 'Avatar', 'Sci-Fi', 162, 2009, 5.50),
(7, 'Joker', 'Drama', 122, 2019, 4.75),
(8, 'Frozen', 'Animation', 102, 2013, 3.00),
(9, 'Avengers', 'Action', 143, 2012, 5.25);

-- INSERT CUSTOMER VALUES
INSERT INTO Customer VALUES
(2, 'Wolfgang Ackermann', 'Austria', 'male', '1971-11-17', '2018-10-15'),
(3, 'Daniela Herzog', 'Austria', 'female', '1974-08-07', '2019-02-14'),
(4, 'Julia Jung', 'Austria', 'female', '1991-01-04', '2017-11-22'),
(5, 'Juliane Kirsch', 'Austria', 'female', '1977-03-01', '2018-12-16'),
(6, 'Rowanne Couperus', 'Belgium', 'female', '1994-04-05', '2018-08-26'),
(7, 'Annelous Sneep', 'Belgium', 'female', '1993-11-14', '2018-05-12'),
(8, 'Jaëla van den Dolder', 'Belgium', 'female', '1990-08-31', '2018-02-08'),
(9, 'Antal van Looij', 'Belgium', 'male', '1982-06-18', '2019-03-10'),
(10, 'Arnout Veenhuis', 'Belgium', 'male', '1984-07-26', '2017-01-28');

-- INSERT RENTING VALUES
INSERT INTO Renting VALUES
-- REMOVE renting_id 16 completely
INSERT INTO Renting VALUES
(1, 2, 8, NULL, '2018-10-09'),
(2, 3, 9, 10, '2017-03-01'),
(3, 4, 5, 4, '2018-06-08'),
(4, 5, 6, 8, '2018-10-22'),
(5, 6, 5, 7, '2019-03-18'),
(6, 7, 1, 7, '2018-10-09'),
(7, 8, 1, NULL, '2018-11-10'),
(8, 9, 5, 10, '2018-06-05'),
(9, 10, 2, NULL, '2017-09-03'),
(10, 2, 3, NULL, '2017-11-08'),
(11, 5, 2, NULL, '2017-06-04'),
(12, 10, 5, 10, '2018-06-29'),
(13, 5, 8, 7, '2017-05-14'),
(14, 2, 9, NULL, '2018-08-03'),
(15, 5, 5, 10, '2017-11-25'),
-- (16 removed)
(17, 2, 6, 10, '2019-02-16'),
(18, 3, 9, 10, '2019-03-20');

-- TASK 1: Income generated from each movie
SELECT 
    m.title,
    COUNT(r.renting_id) * m.renting_price AS total_income
FROM Movie m
LEFT JOIN Renting r ON m.movie_id = r.movie_id
GROUP BY m.title, m.renting_price
ORDER BY total_income DESC;

-- TASK 2: Movies rented each year
SELECT 
    YEAR(date_renting) AS renting_year,
    COUNT(*) AS total_rentals
FROM Renting
GROUP BY YEAR(date_renting)
ORDER BY renting_year;

-- TASK 3
SELECT TOP 3
    c.name,
    COUNT(r.renting_id) AS total_rentals
FROM Customer c
JOIN Renting r ON c.customer_id = r.customer_id
GROUP BY c.name
ORDER BY total_rentals DESC;
