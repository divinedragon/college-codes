/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [C] - Write C Programs for the following

(c) Two numbers are entered through keyboard. WAP to find the value of one
number raised to the power of another.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:

*/
#include<stdio.h>
int main(void)
{	int num1,num2,i=1;
	long int result = 1;
	printf("\n\nEnter Number 1 ==> "); scanf("%d",&num1);
	printf("\nEnter Number 2 ==> "); scanf("%d",&num2);

	while(i<=num2)
	{	result = result * num1;
		i++;
	}
	printf("\n%d raised to power of %d ==> %ld",num1,num2,result);

	return 1;
}