# Write your MySQL query statement below
with coc as(
select distinct managerId, count(managerId) as cock from employee
group by managerId
having cock >= 5

)
select e.name from employee e, coc c 
where c.managerId = e.id  ;
