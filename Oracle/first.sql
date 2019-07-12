select ename, empno,
case when sal<=1000 then 'd'
when sal <= 2000 then 'c'
when sal <= 3000 then 'b'
else 'a'
end as grade from emp
/
