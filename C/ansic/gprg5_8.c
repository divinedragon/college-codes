/* This Program Reverses the digits of a Number using WHILE LOOP. */
#include<stdio.h>
void main()
{	int number, right_digit;

	/* Accepting a Number from User */
	printf("\nEnter a Number : "); scanf("%i", &number);
	printf("\nReverse of the entered Number : ");

	/* Reversing the Number */
	while(number!= 0)
	{   right_digit = number % 10;
	    printf("%i", right_digit);
	    number = number/10;
	}
}