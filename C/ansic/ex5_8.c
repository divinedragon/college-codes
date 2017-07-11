/* Generate a table of triangular numbers with Input from user  5 times */
#include<stdio.h>
void main()
{       int n, number, triangular_number = 0, counter, ucounter;

	printf("\nNumbers U want to enter : "); scanf("%d", &ucounter);
	for(counter=1; counter<=ucounter; ++counter)
	{   printf("\nWhat triangular number do you want : ");
	    scanf("%i", &number);

	    triangular_number = 0;

	    for(n=1; n<=number; ++n)
		triangular_number = triangular_number+n;

	    printf("Triangular Number of %i is %i\n", number, triangular_number);
	}
}
