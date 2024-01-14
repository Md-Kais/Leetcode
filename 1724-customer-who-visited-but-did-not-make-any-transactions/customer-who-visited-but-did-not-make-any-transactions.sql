# Write your MySQL query statement below
select distinct v.customer_id , count(v.customer_id) as count_no_trans
from visits v
where v.visit_id not in (select distinct visit_id from transactions)
Group by v.customer_id;