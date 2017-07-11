/***********************************************************
Program: I_TAX.C - MCA Lab Assignment - 1.2
Author: Deepak Shakya
Date: 26-09-2009
Description: Program to calculate the Income Tax based on following panel
						 First 5000 of Income: 0% Tax
						 Next 10,000 of Income: 10% Tax
						 Next 20,000 of Income: 25% Tax
						 Amount above 35,000: 20% Tax
***********************************************************/

#include<stdio.h>
#include<conio.h>

int main(void)
{
	float annual_income;
	double income_tax=0.0;

	clrscr();
	printf("\n\t\tINCOME TAX CALCULATOR");

	printf("\nEnter your Annual Salary ==> "); scanf("%f",&annual_income);

	if(annual_income <= 5000)
	{
		// Annual Income is less than 5000. Slab I
		income_tax = 0.0;
	}
	else if((annual_income > 5000) && (annual_income <= 15000))
	{
		// Annual Income lies in Slab 2
		income_tax = (annual_income-5000)*0.1;
	}
	else if((annual_income > 15000) && (annual_income <=35000))
	{
		// Annual Income lies in Slab 3
		income_tax = (10000.0*0.1) + ((annual_income-15000)*0.15);
	}
	else if(annual_income > 35000)
	{
		// Annual Income lies in Slab 4
		income_tax = (10000.0*0.1) + (20000.0*0.15) + ((annual_income-35000)*0.2);
	}

	printf("\nYour Income Tax ==> %.6f",income_tax);

	return 1;

}