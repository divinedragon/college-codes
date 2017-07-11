/***********************************************************
Program: PRFCT.C - MCA Lab Assignment - 2.6
Author: Deepak Shakya
Date: 26-09-2009
Description: Program to find whether the number is Perfect Number or not
						 An Perfect Number is a number such that the sum of its
						 divisors is equal to the number itself
***********************************************************/

#include<stdio.h>
#include<conio.h>

int main(void)
{
	int number;
	int i=1;
	int sum=0;

	clrscr();
	printf("\nPerect Number Program");
	printf("\nEnter a Number ==> "); scanf("%d",&number);

	while(i<number)
	{
		if(0 == number%i)
		{
			// We have got a divisor. Add it to the sum value
			sum += i;
		}
		i++;
	}

	if(sum == number)
	{
		printf("\n%d is a Perfect Number",number);
	}
	else
	{
		printf("\n%d is a NOT Perfect Number",number);
	}

	return 1;
}