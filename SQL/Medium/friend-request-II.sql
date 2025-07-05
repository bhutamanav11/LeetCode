# Write your MySQL query statement below

SELECT id, COUNT(*) as num
FROM (SELECT requester_id AS id 
FROM RequestAccepted 
UNION ALL 
SELECT accepter_id 
FROM RequestAccepted) as T
GROUP BY id
ORDER BY num desc
LIMIT 1
