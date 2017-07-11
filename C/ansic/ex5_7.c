/* This program determines the purpose of decimal point before the field */
/* width specification. For example, printf("%.2f", amount);             */
#include<stdio.h>
void main()
{	int dollars, cents, count;

	for(count=1; count<=10; count++)
	{   printf("\nEnter Dollars : "); scanf("%i", &dollars);
	    printf("Enter Cents : "); scanf("%i", &cents);
	    printf("$%i.%.2i\n\n", dollars, cents);
	}
}

