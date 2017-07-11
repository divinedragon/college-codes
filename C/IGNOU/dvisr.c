/***********************************************************
Program: COUNT.C - MCA Lab Assignment - 1.4
Author: Deepak Shakya
Date: 26-09-2009
Description: Program to generate the divisors of a number
***********************************************************/

#include<stdio.h>
#include<conio.h>

int main(void)
{
	int value;
	int num;

	clrscr();
	printf("\n\t\tDivisor Generation Program");

	// Accept the number from the user
	printf("\nEnter a Number ==> "); scanf("%d",&value);

	if(value > 0)
	{
		printf("\nDivisor for %d are ==> 1 ",value);

		num=2;
		while(num<=value)
		{
			if(0 == value%num)
			{
				// We have got a divisor
				printf("%d ",num);
			}
			num++;
		}
	}
	else
	{
		printf("\nDivisor for %d are ==> ");

		num = value;		// The lower limit of the num is the number itself

		while(num<=(-value))
		{
			if(0 == num)
				num++;

			if(0 == value%num)
			{
				// We have got a divisor
				printf("%d ",num);
			}
			num++;
		}

	}

	return 1;

}