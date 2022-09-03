# Write your MySQL query statement below
SELECT employee_id, 
CASE
    WHEN employee_id % 2 = 0 THEN 0
    WHEN name LIKE 'M%' THEN 0
    ELSE salary
END 
AS bonus
FROM Employees
ORDER BY Employee_id ASC;


SELECT employee_id, 
CASE
    WHEN employee_id % 2 = 1 AND name NOT LIKE 'M%' THEN salary
    ELSE 0
END 
AS bonus
FROM Employees
ORDER BY Employee_id ASC;
