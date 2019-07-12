declare
	cursor c1 IS select empno, ename, sal from emp42;
	empno emp.empno%type;
	ename emp.ename%type;
	sal emp.sal%type;

begin
	OPEN c1;
	loop 
		fetch c1 into empno, ename, sal;
	EXIT WHEN c1%notfound;
		insert into temp42 values(empno,ename,sal);
		update emp42 set sal = sal*1.1 WHERE empno = empno;
	END LOOP;
	
	dbms_output.put_line(c1%rowcount);
exception
	WHEN no_data_found THEN
	dbms_output.put_line('No Data Found');
	WHEN others THEN
	dbms_output.put_line('Others');
end;
/