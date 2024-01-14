# Write your MySQL query statement below
select customer_id, count(customer_id) as count_no_trans from visits
where visit_id Not in (select distinct visit_id from visits natural join transactions)
Group by customer_id;