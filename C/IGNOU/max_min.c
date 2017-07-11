/***********************************************************
Program: MAX_MIN.C - MCA Lab Assignment - 3.13
Author: Deepak Shakya
Date: 27-09-2009
Description: Program that finds the maximum and minimum within a set of
			 integers input by the user
***********************************************************/
#include<stdio.h>
#include<conio.h>

int main(void)
{
	int value;
	int count=0;
	int max,min;

	clrscr();

	printf("\nFinding Minimum and Maximum value within a set of input");
	do
	{
		printf("\nEnter a value (0 to exit) ==> "); scanf("%d",&value);

		if(value != 0)
		{
			// We have to ignore the value 0. Its the exiting value
			if(count != 0)
			{
				if(value > max)
				{
					// Entered value is largest among the input set
					max = value;
				}

				if(value < min)
				{
					// Entered value is least among the input set
					min = value;
				}
			}
			else
			{
				// This block is executed only once.
				max = min = value;	// First value among the input set
									// So, its maximum as well as minimum
			}
			count++; // Increment the count of the input set
		}
	}while(value!=0);

	printf("\nTotal values entered ==> %d",count);
	printf("\nMaximum value in the input set ==> %d",max);
	printf("\nMinimum value in the input set ==> %d",min);

	return 1;
}