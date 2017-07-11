/* Basic Conversions in C */
#include<stdio.h>
void main()
{	/* Declaration of Variables */
	float f1 = 123.125, f2;
	int i1, i2 = -150;

	i1 = f1;		/* Floating to Integer Conversion */
	printf("%f assigned to an int produces %i\n", f1, i1);

	f2 = i2;		/* Integer to Floating Conversion */
	printf("%i assigned to an float produces %f\n", i2, f2);

	f1 = i2/100;	        /* Integer divided by Integer */
	printf("%i  divided by 100 produces %f\n", i2, f1);

	f2 = i2/100.0;	        /* Integer divided by Float */
	printf("%i  divided by 100.0 produces %f\n", i2, f2);

}