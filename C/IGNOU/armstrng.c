/***********************************************************
Program: ARMSTRNG.C - MCA Lab Assignment - 2.5
Author: Deepak Shakya
Date: 26-09-2009
Description: Program to find all Armstrong Strong between 0 to 999
						 An Armstrong Number is a number such that the sum of the
						 cubes of its digits is equal to the number itself
***********************************************************/

#include<stdio.h>
#include<conio.h>

int main(void)
{
	int number=1;
	int digit;
	int sum;

	clrscr();
	printf("\nArmstrong Numbers between 0 and 999 are ==> \n");

	while(number<1000)
	{
		// Loop for the range 0-999
		int temp = number;
		sum = 0;
		while(temp!=0)
		{
			digit = temp%10;
			sum = sum + (digit*digit*digit);
			temp = temp/10;
		}
		if(sum == number)
		{
			// We found an Armstrong Number
			printf("%4d",number);
		}
		number++;
	}

	return 1;

}