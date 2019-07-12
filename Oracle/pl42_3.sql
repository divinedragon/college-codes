<<OUTER>> -- Outer Label
DECLARE
	x real := 10;
	y real := 15;
BEGIN
	<<INNER>>	
	DECLARE
		x real;
	BEGIN
		x := 20;
		dbms_output.put_line('Variable X >> '|| x);
		dbms_output.put_line('Variable Y >> '|| y);
		dbms_output.put_line('Variable OUTER X >> '|| OUTER.x);

	END; <<INNER>>

	dbms_output.put_line('Variable X >> '|| x);
END; --<<OUTER>>;
/