CREATE TABLE Employees (
    ID INT,
    Name VARCHAR(50),
    Age INT,
    Salary DECIMAL(10, 2)
);

-- Inserting a single row into the table
INSERT INTO Employees (ID, Name, Age, Salary) VALUES (1, 'John Doe', 30, 50000.00);

-- Inserting multiple rows into the table
INSERT INTO Employees (ID, Name, Age, Salary) VALUES 
    (2, 'Jane Smith', 28, 60000.00),
    (3, 'Michael Johnson', 35, 75000.00),
    (4, 'Emily Brown', 32, 55000.00);
