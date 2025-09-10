# Write your MySQL query statement below
SELECT P.product_name, S.year,S.price
FROM Sales AS S
JOIN Product AS P
ON s.product_id=p.product_id;

