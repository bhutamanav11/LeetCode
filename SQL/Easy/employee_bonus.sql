select e.name , b.bonus from Employee e left outer join Bonus b on e.empID = b.empID where bonus<1000 or b.bonus is null;
