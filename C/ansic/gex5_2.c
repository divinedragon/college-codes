/* This program displays a table of n & n^2, for n = 1 to 10 */
#include<stdio.h>
void main()
{	int n;

	printf("\nVALUE OF n\tSQUARE OF n");
	printf("\n..........\t...........");

	for(n=1; n<=10; n++)
	   printf("\n   %i\t\t%5i", n, n*n);
}