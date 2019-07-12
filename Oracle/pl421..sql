declare

begin 
	if SQL%notfound then
		dbms_output.put_line('TRUE');
	elsif not SQL%notFound then
		dbms_output.put_line('FALSE');
	else
		dbms_output.put_line('NULL');
	end if;
	
	update emp42 set sal = sal + 10;
	dbms_output.put_line(SQL%rowcount);
	
	if SQL%notfound then
		dbms_output.put_line('TRUE');
	elsif not SQL%notFound then
		dbms_output.put_line('FALSE');
	else
		dbms_output.put_line('NULL');
	end if;

	update emp42 set sal = sal - 10 where empno = 1;
	dbms_output.put_line(SQL%rowcount);
	
	if SQL%notfound then
		dbms_output.put_line('TRUE');
	elsif not SQL%notFound then
		dbms_output.put_line('FALSE');
	else
		dbms_output.put_line('NULL');
	end if;
end;
/