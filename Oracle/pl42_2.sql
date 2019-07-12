declare 
	empRec emp%RowType;
begin
	select * into empRec from emp where empno =7902;
	dbms_output.put_line('Employee No >> '||empRec.empno);
	dbms_output.put_line('Employee Name >> '||empRec.ename);
	dbms_output.put_line('Employee Sal >> '||empRec.sal);
	dbms_output.put_line('Employee Job >> '||empRec.job);
end;
/