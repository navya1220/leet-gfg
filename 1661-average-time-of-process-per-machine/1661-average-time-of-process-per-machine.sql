# Write your MySQL query statement below
select distinct b1.machine_id, round(avg(a2.timestamp-b1.timestamp),3) as processing_time from Activity b1 join Activity a2 on b1.machine_id = a2.machine_id 
and b1.process_id = a2.process_id and b1.activity_type = 'start' and a2.activity_type='end' group by b1.machine_id; 