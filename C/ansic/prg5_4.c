/* Program to generate a table of triangular numbers with Input from user */
#include<stdio.h>
void main()
{       int n, number, triangular_number = 0;

	printf("\nWhat triangular number do you want : ");
	scanf("%i", &number);

	for(n=1; n<=number; ++n)
		triangular_number = triangular_number+n;

	printf("Triangular Number of %i is %i\n", number, triangular_number);
}
