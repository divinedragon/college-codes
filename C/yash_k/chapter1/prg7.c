/*
Yashwant Kanitkar - Let Us C
Chapter 1 - [G] - Write C Programs for the following

(g) If a FIVE digit number is input, WAP to calculate the sum of the digits.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
	The main funda is the use of % (mod) operator to extract each number from
	the end and then calculating sum of these extracted values.

*/
#include<stdio.h>
int main(void)
{	int number,sum_digits=0,temp;
	printf("\n\nEnter a Number ==> "); scanf("%d",&number);

	//Extracting the Digit @ UNITS place
	temp = number % 10;	//Extracting the last digit from the number
	number = number / 10;	//Removing the last digit from the number
	sum_digits = sum_digits + temp;

	//Extracting the Digit @ TENS place
	temp = number % 10;	//Extracting the last digit from the number
	number = number / 10;	//Removing the last digit from the number
	sum_digits = sum_digits + temp;

	//Extracting the Digit @ HUNDREDS place
	temp = number % 10;	//Extracting the last digit from the number
	number = number / 10;	//Removing the last digit from the number
	sum_digits = sum_digits + temp;

	//Extracting the Digit @ THOUSANDS place
	temp = number % 10;	//Extracting the last digit from the number
	number = number / 10;	//Removing the last digit from the number
	sum_digits = sum_digits + temp;

	//Extracting the Digit @ TEN THOUSANDS place
	temp = number % 10;	//Extracting the last digit from the number
	number = number / 10;	//Removing the last digit from the number
	sum_digits = sum_digits + temp;

	/*
	THIS ONE IS THE LOOP VERSION OF THE SAME PROBLEM.
	while (number)
	{	sum_digits = sum_digits + (number % 10);
		number = number / 10;
	}
	*/
	printf("\nThe sum of the digits of the entered number --> %d",sum_digits);
	return 1;
}