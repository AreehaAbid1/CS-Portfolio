CREATE DATABASE FruitStoreDB;
GO

USE FruitStoreDB;
GO

CREATE TABLE Discount (
    Customer VARCHAR(50),
    Discount INT
);

CREATE TABLE Product (
    Product VARCHAR(50),
    Price FLOAT,
    Currency VARCHAR(10),
    Quantity INT
);

CREATE TABLE Orders (
    OrderID INT PRIMARY KEY,
    Customer VARCHAR(50),
    Product VARCHAR(50),
    Price FLOAT,
    Currency VARCHAR(10),
    Quantity INT,
    OrderDate DATE,
    TotalAmount FLOAT
);

INSERT INTO Discount VALUES
('eFruits', 14),
('Healthy Choices', 10),
('World of Fruits', 2),
('VitaFruit', 11),
('Fruity Loops', 4),
('Fruit Mag', 5),
('Fruit Mania', 3),
('Health Mag', 16),
('Fruit Shop', 7),
('Health Mag', 13);

INSERT INTO Product VALUES
('Apple', 2, 'USD', 25000),
('Apricot', 1.55, 'USD', 2500),
('Avocado', 3, 'USD', 1000),
('Banana', 1.8, 'USD', 35000),
('Blackberry', 2, 'USD', 100000),
('Blackcurrant', 2.5, 'USD', 2500),
('Blueberry', 2, 'USD', 105000),
('Cherry', 3.5, 'USD', 55500),
('Coconut', 3, 'USD', 500),
('Cranberry', 1.1, 'USD', 41000);

INSERT INTO Orders VALUES
(284, 'VitaFruit', 'Apple', 0.76, 'USD', 75, '2018-09-17', 57),
(330, 'Healthy Choices', 'Apple', 1.96, 'USD', 200, '2018-10-29', 392),
(302, 'World of Fruits', 'Cranberry', 4.16, 'USD', 25, '2018-10-09', 104),
(248, 'Fruit Mania', 'Blueberry', 1.11, 'USD', 300, '2018-08-11', 333),
(358, 'Fruit Mag', 'Coconut', 1.11, 'USD', 750, '2018-11-29', 832.5),
(100, 'VitaFruit', 'Avocado', 2.91, 'USD', 500, '2018-03-29', 1455),
(218, 'Fruit Mag', 'Coconut', 1.11, 'USD', 75, '2018-07-11', 83.25),
(205, 'Health Mag', 'Banana', 1.31, 'USD', 250, '2018-06-29', 327.5),
(324, 'Fruity Loops', 'Blackcurrant', 2.41, 'USD', 75, '2018-10-24', 180.75),
(332, 'eFruits', 'Cherry', 1.56, 'USD', 1000, '2018-10-31', 1560);

CREATE TABLE CancelledOrdersLog (
    OrderID INT,
    Customer VARCHAR(50),
    DeletedAt DATETIME
);

CREATE TABLE DiscountLog (
    Customer VARCHAR(50),
    OldDiscount INT,
    NewDiscount INT,
    ChangedAt DATETIME
);

CREATE TABLE SalesNotification (
    OrderID INT,
    Message VARCHAR(200),
    NotifiedAt DATETIME
);

--TASK 1:
CREATE TRIGGER trg_CancelledOrders
ON Orders
AFTER DELETE
AS
BEGIN
    INSERT INTO CancelledOrdersLog
    SELECT OrderID, Customer, GETDATE()
    FROM DELETED;
END;
GO

--TASK 2:
CREATE TRIGGER trg_DiscountUpdate
ON Discount
AFTER UPDATE
AS
BEGIN
    INSERT INTO DiscountLog
    SELECT d.Customer, d.Discount, i.Discount, GETDATE()
    FROM DELETED d
    JOIN INSERTED i ON d.Customer = i.Customer;
END;
GO

--TASK 3:
CREATE TRIGGER trg_NewOrderNotification
ON Orders
AFTER INSERT
AS
BEGIN
    INSERT INTO SalesNotification
    SELECT OrderID,
           'New order placed for customer ' + Customer,
           GETDATE()
    FROM INSERTED;
END;
GO

--TASK 4:
DELETE FROM Orders
WHERE OrderID = 332;

--TASK 5:
UPDATE Discount
SET Discount = 10
WHERE Customer = 'eFruits';

--TASK 6:
INSERT INTO Orders VALUES
(300, 'Health Mag', 'Apricot', 0.89, 'USD', 55, '2018-01-11', 48.95);

SELECT * FROM CancelledOrdersLog;
SELECT * FROM DiscountLog;
SELECT * FROM SalesNotification;