/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [C] - Write C Programs for the following

(e) WAP to print out all the ARMSTRONG NUMBERS b/w 1 and 500.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:
	ARMSTRONG NUMBERS - The sum of the cubes of each digits of the number is
							  equal to the number itself.
	153 = (1x1x1) + (5x5x5) + (3x3x3)

*/
#include<stdio.h>
int main(void)
{	int i=1,j,k,sum=0,cube=1;
	printf("\n");
	while(i<=500)
	{  //This loop will from 1 to 500.
		j=i;
		sum=0;	//For every new no. the sum should start from 0
		while (j>0)
		{  //This loop will check for armstrong no. individually.
			cube = 1;	//For each digit we have to find the cube.
			for(k=1; k<=3; k++)
			{	cube = cube * (j%10);
			}
			sum = sum + cube;	//Total sum of the digits is calculate here.
			j=j/10;
		}
		if (sum == i)
		{	printf("\t%d",i);
		}
		i++;
	}
	return 1;
}