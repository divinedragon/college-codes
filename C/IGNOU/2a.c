/***********************************************************
Program: 2A.C - MCA Assignment - C - 2.a
Author: Deepak Shakya
Date: 03-10-2009
Description: Program to display the following triangle
						 *
						 ***
						 *****
						 *******
************************************************************/

#include<stdio.h>
#include<conio.h>

int main(void)
{
	int row,col;

	clrscr();

	printf("\nPrinting the Triangle...");

	// Following block prints the triangle
	for(row=0; row<=5; row++)
	{
		printf("\n");
		for(col=(2*row+1); col>0; col--)
		{
			printf("*");
		}
	}

	return 0;
}
