CREATE DATABASE CountryDB;
GO

USE CountryDB;
GO

CREATE TABLE Countries (
    country VARCHAR(50),
    continent VARCHAR(50),
    indep_year INT
);

CREATE TABLE PrimeMinister (
    country VARCHAR(50),
    continent VARCHAR(50),
    prime_minister VARCHAR(100)
);

CREATE TABLE Monarch (
    country VARCHAR(50),
    continent VARCHAR(50),
    monarch VARCHAR(100)
);

CREATE TABLE President (
    country VARCHAR(50),
    continent VARCHAR(50),
    president VARCHAR(100)
);

INSERT INTO Countries VALUES
('Australia', 'Oceania', 1901),
('Brunei', 'Asia', 1984),
('Chile', 'South America', 1818),
('Egypt', 'Africa', 1922),
('India', 'Asia', 1947),
('Norway', 'Europe', 1905),
('Oman', 'Asia', 1951),
('Pakistan', 'Asia', 1947),
('Portugal', 'Europe', 1143),
('Uruguay', 'South America', 1825),
('USA', 'North America', 1776);

INSERT INTO PrimeMinister VALUES
('Egypt', 'Africa', 'Mostafa Madbouly'),
('Portugal', 'Europe', 'Antonio Costa'),
('Pakistan', 'Asia', 'Shehbaz Sharif'),
('United Kingdom', 'Europe', 'Boris Johnson'),
('India', 'Asia', 'Narendra Modi'),
('Australia', 'Oceania', 'Scott Morrison'),
('Norway', 'Europe', 'Jonas Gahr Store'),
('Brunei', 'Asia', 'Hassanal Bolkiah'),
('Oman', 'Asia', 'Haitham bin Tarik'),
('New Zealand', 'Oceania', 'Jacinda Ardern');

INSERT INTO Monarch VALUES
('Brunei', 'Asia', 'Hassanal Bolkiah'),
('Norway', 'Europe', 'Harald V'),
('Oman', 'Asia', 'Haitham bin Tarik'),
('United Kingdom', 'Europe', 'Queen Elizabeth II');

INSERT INTO President VALUES
('Egypt', 'Africa', 'Abdel Fattah el-Sisi'),
('Portugal', 'Europe', 'Marcelo Rebelo de Sousa'),
('USA', 'North America', 'Joe Biden'),
('Uruguay', 'South America', 'Luis Lacalle Pou'),
('Pakistan', 'Asia', 'Arif Alvi'),
('Chile', 'South America', 'Gabriel Boric'),
('India', 'Asia', 'Ram Nath Kovind');

--task 1
CREATE VIEW asian_countries AS
SELECT 
    c.country,
    pm.prime_minister
FROM Countries c
LEFT JOIN PrimeMinister pm
ON c.country = pm.country
WHERE c.continent = 'Asia';
GO

--task 2
INSERT INTO Countries VALUES
('China', 'Asia', 1949);

INSERT INTO PrimeMinister VALUES
('China', 'Asia', 'Li Qiang');

--task 3
UPDATE PrimeMinister
SET prime_minister = 'Anwar-ul-Haq'
WHERE country = 'Pakistan';

--task 4
CREATE VIEW country_leaders AS
SELECT
    c.country,
    c.continent,
    pm.prime_minister,
    pr.president,
    m.monarch
FROM Countries c
LEFT JOIN PrimeMinister pm
    ON c.country = pm.country
LEFT JOIN President pr
    ON c.country = pr.country
LEFT JOIN Monarch m
    ON c.country = m.country;
GO

--task 5
SELECT * FROM asian_countries;
SELECT * FROM country_leaders;