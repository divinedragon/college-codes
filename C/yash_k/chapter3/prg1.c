/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [C] - Write C Programs for the following

(a) WAP to calculate overtime pay of 10 employees. Overtime is paid @ Rs.20
per hour for every hours worked above 40 hours. Assume the employees do not
work for fractional part of an hour.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:

*/
#include<stdio.h>
int main(void)
{  int hours_worked,i=0;
	while(i<10)
	{  i++;
		printf("\n\nEnter No.of Hours Worked by Employee #%d ==> ",i);
		scanf("%d",&hours_worked);
		hours_worked = hours_worked - 40;
		if (hours_worked > 0)
		{	printf("\nOvertime Pay for Employee #%d ==> Rs. %.2f",i,((float) hours_worked*20.0));
		}
		else
		{	printf("\nNo Overtime Pay for Employee #%d",i);
		}
	}

	return 1;
}