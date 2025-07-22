SELECT e1.name as Employee
FROM Employee e1
LEFT JOIN Employee e2 ON e1.ManagerId = e2.id
WHERE E1.salary > E2.salary
GROUP BY E1.id;
