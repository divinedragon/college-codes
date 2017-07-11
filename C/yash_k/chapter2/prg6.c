/*
Yashwant Kanitkar - Let Us C
Chapter 2 - [G] - Write C Programs for the following

(a) Any year is input through keyboard. WAP to determine whether it a leap
year or not using conditional operators.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
	Leap year should divide by 4. If the year ends in 00, it must be divided
	by 400.

*/
#include<stdio.h>
int main(void)
{  int year;
	printf("\n\nEnter a Year ==> "); scanf("%d",&year);

	if (year%4==0)
	{  if (year%100==0)
		{	if (year%400==0)
			{	printf("\n%d is a LEAP YEAR.",year);
			}
			else
			{	printf("\n%d is not a LEAP YEAR.",year);
			}
		}
		else
		{	printf("\n%d is a LEAP YEAR.",year);
		}
	}
	else
	{	printf("\n%d is not a LEAP YEAR.");
	}
	return 1;
}