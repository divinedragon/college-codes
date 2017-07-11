/* This program is the formatted version of a non - readable program. */
#include<stdio.h>
void main()
{	int n, two_to_the_n;

	printf("\n\nTABLE OF POWERS OF TWO");
	printf("\n  n    2 to the n");
	printf("\n....   ..........");

	two_to_the_n = 1;
	for(n=0; n<=10; ++n)
	{   printf("\n%2i\t%i",n,two_to_the_n);
	    two_to_the_n = two_to_the_n * 2;
	}
}


