/* This program illustrates the use of '?' operator. */
#include<stdio.h>
int main(void)
{	int isrqd, i;

	printf("\nEnter a Number : "); scanf("%d", &i);

	isrqd = i>0 ? i*i: -(i*i);
	printf("%d squared is %d", i, isrqd);

	return 0;
}