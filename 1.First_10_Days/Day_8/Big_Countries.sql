/*
Problem Title: Big Countries
Problem Link: https://leetcode.com/problems/big-countries/
*/

# Write your MySQL query statement below

SELECT name, population, area
FROM World
WHERE
area >= 3000000 
OR
population >= 25000000
ORDER BY population DESC
