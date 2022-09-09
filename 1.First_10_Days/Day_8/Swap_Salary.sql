/*
Problem Title: Swap Salary
Problem Link: https://leetcode.com/problems/swap-salary/
*/

# Write your MySQL query statement below

UPDATE Salary
SET sex = 
CASE sex
WHEN 'm' THEN 'f'
ELSE 'm'
END


