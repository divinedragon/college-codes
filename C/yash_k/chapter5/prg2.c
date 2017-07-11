/*
Yashwant Kanitkar - Let Us C
Chapter 5 - [C] - Write C Programs for the following

(b) Write a function power(a,b), to calculate the value of a raised to b.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:

*/
#include<stdio.h>
int power(int a, int b);
int main(void)
{  int a,b;

	printf("\n\nEnter 1st Number(a) ==>  "); scanf("%d",&a);
	printf("\nEnter 1st Number(b) ==>  "); scanf("%d",&b);

	printf("\n%d raised to Power of %d ==> %d",a,b,power(a,b));
	return 1;
}
int power(int a, int b)
{	int result=1,i=1;
	for (;i<=b; i++)
	{	result = result * a;
	}
	return result;
}