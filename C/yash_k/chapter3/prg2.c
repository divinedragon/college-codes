/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [C] - Write C Programs for the following

(b) WAP to find the factorial of a number input through the keyboard.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:


*/
#include<stdio.h>
int main(void)
{	int num,i=2;
	long int factorial=1;
	printf("\n\nEnter a Number to find its factorial ==> ");
	scanf("%d",&num);
	if (num > 0)
	{	while(i<=num)
		{	factorial = factorial * i;
			i++;
		}
		printf("\nFactorial of %d  ==> %ld",num,factorial);
	}
	else if (num==0)
	{  printf("\nFactorial of 0  ==> 1");
	}
	else
	{	printf("\nFactorial of Negative Number is not Defined.");
	}
	return 1;
}