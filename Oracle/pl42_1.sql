declare 
	tempno emp.empno%type;
	tename emp.ename%type;
	tsal emp.sal%type;
begin
	select empno, ename, sal into tempno, tename, tsal from emp where empno = 7902;
	insert into t_042 values(tempno, tename, tsal);
	tsal := tsal*1.1;
	update t_042 set sal = tsal where empno = tempno;
	dbms_output.put_line('Empno >>'|| tempno);
	dbms_output.put_line('Ename >> '|| tename);
	dbms_output.put_line('Sal >> '|| tsal);
	delete from t_042 where empno = tempno;
	dbms_output.put_line('Deleted!!!');
end;