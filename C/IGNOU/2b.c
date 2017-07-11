/***********************************************************
Program: 2B.C - MCA Assignment - C - 2.b
Author: Deepak Shakya
Date: 03-10-2009
Description: Program to compute the average of the ten numbers, 1,4,9...81,100
						 i.e. the average of the squares of the numbers from 1 to 10.
************************************************************/

#include<stdio.h>
#include<conio.h>

#define START 1

#define END 10

int main(void)
{
	float sum=0.0;
	int i;

	clrscr();

	printf("\nAverage of Squares from %d to %d ==> ",START, END);

	// Calculate the Total of all the square values
	for(i=START; i<=END; i++)
	{
		sum = sum + (i*i);
	}

	// Display the average
	printf("%.3f",sum/(END-START+1));		// No. of values = END-START+1

	return 0;
}