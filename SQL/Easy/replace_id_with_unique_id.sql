select e.unique_id, emp.name from Employees emp left outer join EmployeeUNI e on emp.id = e.id;
