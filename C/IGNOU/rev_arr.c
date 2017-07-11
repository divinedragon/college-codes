/***********************************************************
Program: REV_ARR.C - MCA Lab Assignment - 3.14
Author: Deepak Shakya
Date: 27-09-2009
Description: Program that accepts a set of 20 integers and stores it in array.
			 Using a temporary array, it reverses the order of the integers
***********************************************************/
#include<stdio.h>
#include<conio.h>

#define SIZE 20

int main(void)
{
	int array[SIZE];
	int temp_array[SIZE];

	int i=0;

	clrscr();

	printf("\nArray Values reversal");

	// Accepting the values in the array
	for(i=0; i<SIZE; i++)
	{
		printf("\nEnter value for Array[%d] ==> ",(i+1)); scanf("%d",&array[i]);
	}

	// Storing the values in array into temp_array in reverse order
	for(i=0; i<SIZE; i++)
	{
		temp_array[i] = array[SIZE-i-1];
	}


	// Print the temp_array containing the reversed values
	printf("\nReversed Array ==> ");
	for(i=0; i<SIZE; i++)
	{
		printf("%3d",temp_array[i]);
	}

	return 1;
}