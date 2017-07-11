/* Program to generate a table of triangular numbers */
#include<stdio.h>
void main()
{       int n, triangular_number = 0;

	printf("TABLE OF TRIANGULAR NUMBERS\n");
	printf(" n  Sum from 1 to n\n");
	printf("... ................\n");

	for(n=1; n<=10; ++n)
	{	triangular_number = triangular_number+n;
		printf(" %i\t%i\n", n, triangular_number);
	}
}
