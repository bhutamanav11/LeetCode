SELECT project_id , IFNULL(ROUND(AVG(e.experience_years),2),0) as average_years
FROM Project p left join Employee e
ON p.employee_id  = e.employee_id 
GROUP BY project_id
ORDER BY project_id
