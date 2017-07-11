/* This program displays a table of factorial of n , for n = 1,2,...10 */
#include<stdio.h>
void main()
{	/* Varaible Declaration */
	/* m is declared to calculate factorial, while n is the counter. */
	int n, m=1;

	printf("\nVALUE OF n \t       n!");
	printf("\n.......... \t   ..........");

	for(n=1; n<=10; n++,m=n)	/* FOR LOOP is counter loop */
	{   float factorial = 1;	/* 10! does not lie in int range */
	    printf("\n   %i",n);

	    while(m>=1)			/* WHILE LOOP is the main loop. */
	    {   factorial = factorial * m; --m;
	    }

	    printf("\t\t   %.0f", factorial);
	}
}