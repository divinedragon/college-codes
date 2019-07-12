DECLARE
n1 number(5,2) := 10;
n2 number(6,2) := 20;
res number(7,2);
BEGIN
res := n1 + n2;
dbms_output.put_line(res);
END;
--dbms_output package name
--put_line stored procedure