/***********************************************************
Program: COUNT.C - MCA Lab Assignment - 1.3
Author: Deepak Shakya
Date: 26-09-2009
Description: Accept integers till 0 is entered and display following details
						 - total number of even and odd numbers
						 - average value for even numbers
						 - average value for odd numbers
***********************************************************/

#include<stdio.h>
#include<conio.h>

int main(void)
{
	int even_count=0;
	int even_sum=0;
	int odd_count=0;
	int odd_sum=0;
	int value;

	clrscr();
	printf("\n\t\tEVEN-ODD Number Count Program");

	do
	{
		// Accept the number from the user
		printf("\nEnter a Number (0 for exit) ==> "); scanf("%d",&value);

		// Process number
		if(0 != value)
		{
			// A value other than 0. We dont have to consider 0 as input for numbers.
			// 0 is terminating value
			if(0 == value%2)
			{
				// Number is even
				even_count++;				//Increment Even Count
				even_sum += value;	//Update the sum for even numbers
			}
			else
			{
				// Number is odd
				odd_count++;				//Increment Odd Count
				odd_sum += value;		//Update the sum for odd numbers
			}
		}
	}while(value != 0);

	printf("\nTotal Even Numbers Entered ==> %d",even_count);
	printf("\nTotal Odd Numbers Entered ==> %d",odd_count);
	printf("\nAverage of Even Numbers ==> %.4f",(even_sum!=0)?((float)even_sum/even_count):0.0);
	printf("\nAverage of Odd Numbers ==> %.4f",(odd_sum!=0)?((float)odd_sum/odd_count):0.0);

	return 1;

}