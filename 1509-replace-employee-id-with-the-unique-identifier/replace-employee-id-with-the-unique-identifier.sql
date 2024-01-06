# Write your MySQL query statement below
select e.unique_id , t.name from Employees t left join EmployeeUNI e
on e.id = t.id ;