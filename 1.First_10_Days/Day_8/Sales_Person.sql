/*
Problem Title: Sales Person
Problem Link: https://leetcode.com/problems/sales-person/
*/

# Write your MySQL query statement below

SELECT name
FROM SalesPerson
WHERE sales_id not in(
    
    SELECT sales_id 
    FROM Orders
    WHERE com_id in (
    
        SELECT com_id 
        FROM Company
        WHERE name = "RED"
        
    )
    
)

############### Another query ##################

# Write your MySQL query statement below

SELECT name
FROM SalesPerson
WHERE sales_id not in(
    
    SELECT o.sales_id 
    FROM orders o LEFT JOIN company c 
    ON o.com_id = c.com_id
    WHERE c.name = 'RED'
    
)
