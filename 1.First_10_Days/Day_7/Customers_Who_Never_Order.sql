/*
Problem Title: Customers Who Never Order
Problem Link: https://leetcode.com/problems/customers-who-never-order/
*/

# Write your MySQL query statement below

SELECT Name AS Customers
FROM Customers c LEFT JOIN Orders o
ON c.Id = o.CustomerId
WHERE o.CustomerId IS NULL

############### Another query ##################

# Write your MySQL query statement below

SELECT C.name AS Customers
FROM Customers C
WHERE C.id not in (
    SELECT O.customerId
    FROM Orders O 
)

