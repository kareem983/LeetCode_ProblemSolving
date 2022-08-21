/*
Problem Title: Combine Two Tables
Problem Link: https://leetcode.com/problems/combine-two-tables/
*/

# Write your MySQL query statement below

SELECT firstName, lastName, city, state
FROM Person P  lEFT OUTER JOIN Address A
ON P.personId = A.personId
