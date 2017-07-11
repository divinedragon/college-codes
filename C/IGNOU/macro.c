/***********************************************************
Program: MACRO.C - MCA Lab Assignment - 3.12
Author: Deepak Shakya
Date: 26-09-2009
Description: Program that determines the maximum and minimum of two values
			 using MACROS.
***********************************************************/
#include<stdio.h>
#include<conio.h>

#define MAX(a,b) (a>b)?a:b
#define MIN(a,b) (a>b)?b:a

int main(void)
{
	int num1, num2;

	clrscr();

	printf("\nEnter First Number ==> "); scanf("%d",&num1);
	printf("\nEnter Second Number ==> "); scanf("%d",&num2);

	printf("\n\nGreater Value is ==> %d",MAX(num1,num2));
	printf("\n\nSmaller Value is ==> %d",MIN(num1,num2));

	return 1;
}