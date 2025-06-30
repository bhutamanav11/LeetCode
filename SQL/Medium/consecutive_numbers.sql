SELECT DISTINCT num AS ConsecutiveNums 
FROM (
    SELECT num,
        LAG(num,1) OVER (ORDER BY id) AS Prev1,
        LAG(num,2) OVER (ORDER BY id) AS Prev2
        FROM Logs
) AS t
WHERE num = Prev1 AND num = Prev2;
