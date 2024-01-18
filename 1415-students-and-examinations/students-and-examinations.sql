# Write your MySQL query statement below
with exam as (
        select student_id , subject_name, count(subject_name) as attended_exam from examinations
    group by student_id,subject_name
    order by student_id
), info as (
    select * from students,subjects 
)
select i.student_id,i.student_name,i.subject_name, IFNULL(e.attended_exam,0) as attended_exams from info i left join exam e on e.student_id = i.student_id and e.subject_name = i.subject_name
order by i.student_id,i.subject_name;