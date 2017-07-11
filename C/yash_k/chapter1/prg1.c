/*
Yashwant Kanitkar - Let Us C
Chapter 1 - [G] - Write C Programs for the following

(a) Input Basic salary of an employee and calculate his total salary.
		DA is 40% of the Basic salary
		HRA is 20% of the Basic Salary

Written By - Deepak Shakya
Date - 29/07/2007

Solution:

*/
#include<stdio.h>
int main(void)
{	float basic,da,hra,total_sal;
	printf("\nEnter Your Basic Salary ==> "); scanf("%f",&basic);
	da = 0.4 * basic;
	hra = 0.2 * basic;
	total_sal = basic + da + hra;
	printf("\nYour Basic Salary is %.2f",basic);
	printf("\nYour Dearness Allowance is %.2f",da);
	printf("\nYour House rental allowance is %.2f",hra);
	printf("\n\nYour Total Salary is %.2f",total_sal);
	return 1;
}