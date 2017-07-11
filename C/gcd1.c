/* This program displays the Greatest Common Divisor(GCD) of two
number. */
#include<stdio.h>
#include<conio.h>
void main()
{       int num1=0,num2=0,temp=0; clrscr();
	printf("\nEnter 1st Number : "); scanf("%d",&num1);
	printf("\nEnter 2nd number : "); scanf("%d",&num2);
	while(num2!=0)
	{   temp = num1%num2; num1 = num2; num2 = temp;
	}
	printf("\n\nGCD is : %d",num1);
	getch();
}
