/*
Yashwant Kanitkar - Let Us C
Chapter 2 - [C] - Write C Programs for the following

(c) WAP to input a year from the user and determine whether it is a leap
year or not.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
	If the year end in 00, then the year should be divisible by 400 to be a
	leap year. Otherwise the year should be divisible by 4.

*/
#include<stdio.h>
int main(void)
{	int year;
	printf("\n\nEnter a Year ==> "); scanf("%d",&year);
	if (year%100)
	{	//The Year does not end in 00. Use our standard method
		if (year%4 == 0)
		{	printf("\nThe Year --> %d is a Leap Year",year);
		}
		else
		{	printf("\nThe Year --> %d is not a Leap Year",year);
		}
	}
	else
	{	//The Year ends in 00. Use the above described method.
		if (year%400==0)
		{	printf("\nThe Year --> %d is a Leap Year",year);
		}
		else
		{	printf("\nThe Year --> %d is not a Leap Year",year);
		}
	}
	return 1;
}