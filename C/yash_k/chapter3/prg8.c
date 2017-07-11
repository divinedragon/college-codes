/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [C] - Write C Programs for the following

(c) WAP to add first seven terms of the following series using a for loop
	1/1! + 2/2! + 3/3! + ...

Written By - Deepak Shakya
Date - 30/07/2007

Solution:
	Two Task
		First calculate the factorial - Nested loop is required
		Second calculate the sum - Outer loop will do this job
*/
#include<stdio.h>
int main(void)
{	int i,j;
	long int factorial;
	float sum=0;
	for(i=1; i<=7; i++)
	{  //This loop will run for 7 times for adding the seven terms

		for(j=1,factorial=1; j<=i; j++)
		{  //This loop will calculate the factorial
			factorial = factorial * j;
		}
		sum = sum + ((float) i/factorial);	//Sum is calculated here.
	}
	printf("\n\n(1/1!) + (2/2!) + (3/3!) + (4/4!) + (5/5!) + (6/6!) + (7/7!) ==> %f",sum);
	return 1;
}