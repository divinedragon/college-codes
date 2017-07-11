/* This program illustrates the valid statements without the use of any   */
/* relational operator. Any non-zero value is true and zero is false.     */
/* Divide the first number by the second. */
#include<stdio.h>
int main(void)
{	int a, b;

	printf("\nEnter 1st Number : "); scanf("%d", &a);
	printf("\nEnter 2nd Number : "); scanf("%d", &b);

	if (b) printf("\n%d", a/b);
	else printf("\nCannot divide by Zero.");

	return 0;
}