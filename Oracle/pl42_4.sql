DECLARE
	--i integer;
BEGIN
	FOR i in 1..10 LOOP
		dbms_output.put_line(i);
	END LOOP;

END;