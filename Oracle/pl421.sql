CREATE OR REPLACE PROCEDURE p421(year number, tsal emp.sal%type) IS
	
	CURSOR c1 IS select empno, ename, sal, hiredate, extract(year from hiredate) from emp42 where year > extract(year from hiredate) and sal > tsal;
	--empno emp.empno%type;
	--ename emp.ename%type;
	--sal emp.sal%type;
	--hire emp.hiredate%type;
	emprec emp%rowtype;
BEGIN
	--OPEN c1;
	FOR emprec IN LOOP;
	FETCH c1 INTO  emprec;--empno, ename, sal, hire;
	EXIT WHEN c1%notfound;
		insert into temp421 values (empno, ename, sal, hire);
	END LOOP;

	dbms_output.put_line(c1%rowcount);
exception
	WHEN no_data_found THEN
	dbms_output.put_line('No Data Found');
	WHEN others THEN
	dbms_output.put_line('Others');
end;
/
		