SELECT  ROUND(COUNT(*)/(SELECT COUNT(DISTINCT player_id)FROM Activity),2) AS fraction
FROM ACTIVITY
WHERE (player_id,DATE_SUB(event_date,INTERVAL 1 DAY)) IN(
SELECT player_id,MIN(event_date) as first_login
FROM Activity 
GROUP BY player_id
)
