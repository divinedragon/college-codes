/* This program displays the Greatest Common Divisor(GCD) of two
number. */
#include<stdio.h>
#include<conio.h>
void main()
{       int num1=0,num2=0,gcd=1,i; clrscr();
	printf("\nEnter 1st Number : "); scanf("%d",&num1);
	printf("\nEnter 2nd number : "); scanf("%d",&num2);
	if (num1>num2)
	{   for(i=2;i<=num2;i++)
	    {   if ((num1%i == 0) && (num2%i == 0)) gcd=i;
	    }
	}
	else
	{   for(i=2;i<=num1;i++)
	    {   if ((num1%i == 0) && (num2%i == 0)) gcd=i;
	    }
	}
	printf("\n\nGCD is : %d",gcd);
	getch();
}