/* This program displays a table of sum upto n terms, for n = 5,10,...50 */
#include<stdio.h>
void main()
{	int n;

	printf("\nVALUE OF n \t   SUM UPTO n");
	printf("\n.......... \t   ..........");

	for(n=5; n<=50; n+=5)
	   printf("\n   %i            \t%i", n, n*(n+1)/2);
}