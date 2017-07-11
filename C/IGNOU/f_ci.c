/***********************************************************
Program: F_CI.C - MCA Lab Assignment - 3.10
Author: Deepak Shakya
Date: 26-09-2009
Description: Compound Interest calculator using function.
***********************************************************/

#include<stdio.h>
#include<conio.h>

float compound_interest(float int_amt, float rate, int years)
{
	float ci=1.0;

	// Formula for Compound Interest
	// CI = P((100+R)/100)^Y
	while(years>0)
	{
		//Calculating the value for ((100+R)/100)^Y
		ci = ci * ((100+rate)/100);
		years--;
	}

	ci = ci * int_amt;
	return ci;
}

int main(void)
{
	float principal, rate;
	int years;

	clrscr();
	printf("\n\t\tCOMPOUND INTEREST CALCULATOR");

	printf("\nEnter Principal Amount ==> "); scanf("%f",&principal);
	printf("\nEnter Rate of Interest ==> "); scanf("%f",&rate);
	printf("\nEnter Time (in years) ==> "); scanf("%d",&years);

	printf("\nCompound Interest ==> %.3f",compound_interest(principal,rate,years));

	return 1;

}