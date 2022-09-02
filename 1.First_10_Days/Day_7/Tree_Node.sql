/*
Problem Title: Tree Node
Problem Link: https://leetcode.com/problems/tree-node/
*/


# Write your MySQL query statement below

SELECT id, 'Root' AS type
FROM Tree
WHERE p_id is NULL

UNION

SELECT T1.id, 'Leaf' AS type
FROM Tree T1
WHERE T1.id NOT IN (
    SELECT DISTINCT T2.p_id
    FROM Tree T2
    WHERE T2.p_id IS NOT NULL
)
AND 
T1.p_id IS NOT NULL


UNION

SELECT T1.id, 'Inner' AS type
FROM Tree T1
WHERE T1.id IN (
    SELECT DISTINCT T2.p_id
    FROM Tree T2
    WHERE T2.p_id IS NOT NULL
)
AND
T1.p_id IS NOT NULL 
AND 
T1.p_id IN (
    SELECT DISTINCT T2.id
    FROM Tree T2
    WHERE T2.id IS NOT NULL
)


ORDER BY id
