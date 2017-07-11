/*
Yashwant Kanitkar - Let Us C
Chapter 1 - [G] - Write C Programs for the following

(f) Input two number from the user in two different variables and swap the
contents of the two variables.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
	Using third variable -
		temp <- a
		a <- b
		b <- temp
	Without using third variable
		a <- a+b
		b <- a-b
		a <- a-b
*/
#include<stdio.h>
int main(void)
{	int num1,num2,temp;
	printf("\n\nEnter 1st Number (Num1) --> "); scanf("%d",&num1);
	printf("\nEnter 2nd Number (Num2) --> "); scanf("%d",&num2);

	//Swapping using third variable
	temp = num1; 	num1 =  num2;	num2 = temp;

	printf("\nValues swapped using Third variable");
	printf("\nNum1 is now ==> %d",num1);
	printf("\nNum2 is now ==> %d",num2);

	//Again swapping without using third variable
	num1 = num1 + num2;	num2 = num1 - num2;	num1 = num1 - num2;

	printf("\nValues swapped again without using third variable");
	printf("\nNum1 is now ==> %d",num1);
	printf("\nNum2 is now ==> %d",num2);

	return 1;
}