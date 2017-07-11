
/*
Yashwant Kanitkar - Let Us C
Chapter 5 - [D] - Write C Programs for the following

(a) Write a function to calculate the factorial value of any integer entered
through keyboard.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:

*/
#include<stdio.h>
long int factorial(int num);
int main(void)
{	int num;

	printf("\n\nEnter a Number ==> "); scanf("%d",&num);
	printf("\nFactorial of %d ==> %ld",num,factorial(num));
	return 1;
}
long int factorial(int num)
{	long int fact;
	for(fact=1; num>=2; num--)
	{	fact = fact * num;
	}
	return fact;
}
