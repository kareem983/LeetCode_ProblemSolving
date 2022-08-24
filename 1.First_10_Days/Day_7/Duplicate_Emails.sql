/*
Problem Title: Duplicate Emails
Problem Link: https://leetcode.com/problems/duplicate-emails/
*/

# Write your MySQL query statement below

SELECT Email
FROM Person
GROUP BY Email
HAVING COUNT(Email) > 1
