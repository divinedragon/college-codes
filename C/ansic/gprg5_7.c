/* This Program finds the Greatest Common Divisor(GCD) of two
   non-negitive integer values.                              */
#include<stdio.h>
void main()
{	int u, v, temp;

	/* Accepting Two Numbers from User */
	printf("\nEnter 1st Number : "); scanf("%i", &u);
	printf("\nEnter 2nd Number : "); scanf("%i", &v);

	/* Calculing the GCD */
	while(v!= 0)
	{   temp = u % v;
	    u = v;
	    v = temp;
	}

	/* Displaying the Calculated GCD. */
	printf("\n\nThe GCD is %i.", u);
}