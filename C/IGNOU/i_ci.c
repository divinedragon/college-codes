/***********************************************************
Program: I_CI.C - MCA Lab Assignment - 1.1
Author: Deepak Shakya
Date: 26-09-2009
Description: Program that calculates the Simple Interest and Compound
						 Interest.
***********************************************************/

#include<stdio.h>
#include<conio.h>


int main(void)
{
	float principal, rate;
	int years;

	float si=1.0, ci=1.0;	// si - simple interest result
								// ci - compound interest result

	clrscr();
	printf("\n\t\tINTEREST CALCULATOR");

	printf("\nEnter Principal Amount ==> "); scanf("%f",&principal);
	printf("\nEnter Rate of Interest ==> "); scanf("%f",&rate);
	printf("\nEnter Time (in years) ==> "); scanf("%d",&years);

	si = (principal*rate*years)/100;

	// Formula for Compound Interest
	// ci = P((100+R)/100)^Y
	while(years>0)
	{
		//Calculating the value for ((100+R)/100)^Y
		ci = ci * ((100+rate)/100);
		years--;
	}

	ci = ci * principal;

	printf("\nSimple Interest ==> %.2f",si);
	printf("\nCompound Interest ==> %.2f",ci);

	return 1;

}