SELECT r.contest_id , 
ROUND((COUNT(DISTINCT user_id)*100/(SELECT COUNT(user_id)FROM Users)),2) as percentage
FROM Register r
GROUP BY contest_id
ORDER BY percentage desc , contest_id ;
