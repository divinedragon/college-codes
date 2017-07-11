/***********************************************************
Program: PRFCT.C - MCA Lab Assignment - 2.7
Author: Deepak Shakya
Date: 26-09-2009
Description: Program to find whether two numbers are Amicable Numbers or not
						 Amicable numbers are numbers such that the sum of the divisors
						 of first(excluding the number) is equal to the other number
***********************************************************/

#include<stdio.h>
#include<conio.h>

/*** This function returns the sum of all the divisors of the value ***/
int divisor_sum(int value)
{
	int i=1;
	int sum=0;

	if(value > 0)
	{
		i=1;
		sum=0;
		while(i<value)
		{
			if(0 == value%i)
			{
				// We have got a divisor
				sum = sum + i;
			}
			i++;
		}
	}
	else
	{
		i = value;		// The lower limit of the num is the number itself
		sum = 0;

		while(i<(-value))
		{
			if(0 == i)
				i++;

			if(0 == value%i)
			{
				// We have got a divisor
				sum = sum + i;
			}
			i++;
		}

	}

	return sum;
}

int main(void)
{
	int num1,num2;

	clrscr();
	printf("\nAmicable Number Program");
	printf("\nEnter 1st Number ==> "); scanf("%d",&num1);
	printf("\nEnter 2nd Number ==> "); scanf("%d",&num2);

	//printf("-----DEBUG - sum of divisor for num1 = %d",divisor_sum(num1));
	//printf("-----DEBUG - sum of divisor for num2 = %d",divisor_sum(num2));

	if(num1 == divisor_sum(num2) && (num2 == divisor_sum(num1)))
	{
		printf("\n(%d,%d) are Amicable Numbers",num1, num2);
	}
	else
	{
		printf("\n(%d,%d) are NOT Amicable Numbers",num1, num2);
	}

	return 1;
}