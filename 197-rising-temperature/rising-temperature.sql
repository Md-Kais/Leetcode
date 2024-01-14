# Write your MySQL query statement below
select w.id  from weather w , weather w2
where w.temperature > w2.temperature and  datediff(w.recordDate,w2.recordDate) = 1
group by w.id
order by w.recordDate;