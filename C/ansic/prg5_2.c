/* Program to calculate the 200th triangular number */
/* Introduction of the for loop statement */
#include<stdio.h>
void main()
{       int n, triangular_number = 0;

	for(n=1; n<=200; n++)
		triangular_number = triangular_number+n;

	printf("\nThe 200th triangular number is %i", triangular_number);
}
