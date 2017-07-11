/***********************************************************
Program: F_CI_2.C - MCA Lab Assignment - 3.11
Author: Deepak Shakya
Date: 26-09-2009
Description: Compound Interest calculator using function.
			 The function for compound interest is written in another file
			 function.c. Also, all C preprocessor directives are stored in
			 header.h
***********************************************************/
#include "F_CI_H.H"

int main(void)
{
	float principal;
	int years;

	clrscr();
	printf("\n\t\tCOMPOUND INTEREST CALCULATOR");

	printf("\nEnter Principal Amount ==> "); scanf("%f",&principal);
	printf("\nEnter Time (in years) ==> "); scanf("%d",&years);

	printf("\nCompound Interest ==> %.3f",compound_interest(principal,years));

	return 1;
}