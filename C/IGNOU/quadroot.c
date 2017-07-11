/***********************************************************
Program: QUADROOT.C - MCA Lab Assignment - 2.8
Author: Deepak Shakya
Date: 26-09-2009
Description: Program to calculate the roots of a quadratic equation
						 For equation: ax^2 + bx + c = 0
						 Determinant,D = b^2 - 4xaxc
						 If
							D > 0 - Roots are real and unequal
							D < 0 - Roots are complex and unequal
							D = 0 - Roots are real and equal
						 Roots = -b x sqrt(D)/2*a
***********************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(void)
{
	float a,b,c;
	float determinant;
	float root1,root2;

	clrscr();
	printf("\nQuardratic Roots Program");
	printf("\n\tEquation Form: ax^2 + bx + c = 0");
	printf("\nEnter the coefficient of x^2 (a) ==> "); scanf("%f",&a);
	printf("\nEnter the coefficient of x (b) ==> "); scanf("%f",&b);
	printf("\nEnter the independent value (c) ==> "); scanf("%f",&c);

	// Calculate the value of Determinant
	determinant = (b*b)-(4*a*c);

	//Find the roots based on the value of determinant
	if(determinant > 0)
	{
		// Real and Unequal Roots
		printf("\nThe equation has real and unequal roots.");
		determinant = (double) sqrt(determinant);
		root1 = ((-b)+determinant)/(2*a);
		root2 = ((-b)-determinant)/(2*a);
		printf("\nRoot 1 = %.3f",root1);
		printf("\nRoot 2 = %.3f",root2);
	}
	else if(determinant < 0)
	{
		// Complex and unequal roots
		printf("The equation has complex and unequal roots");
		determinant = sqrt(-determinant);
		printf("\nRoot 1 = %.3f+i%.3f",(-b/(2*a)),(determinant/(2*a)));
		printf("\nRoot 2 = %.3f-i%.3f",(-b/(2*a)),(determinant/(2*a)));
	}
	else
	{
		// Roots are real
		printf("The equation has real and equal roots");
		printf("\nRoot 1 = %.3f",((-b)/(2*a)));
		printf("\nRoot 2 = %.3f",((-b)/(2*a)));
	}

	return 1;
}