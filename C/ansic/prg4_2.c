/* Illustrate the use of various Arithematic Operators. */
#include<stdio.h>
void main()
{       /* Declaring the Variables */
	int a = 100; int b = 2; int c = 25; int d = 4; int result;

	/* Subtraction */
	result = a - b; printf("a - b = %i\n", result);

	/* Multiplication */
	result = a * b; printf("a * b = %i\n", result);

	/* Division */
	result = a / b; printf("a / b = %i\n", result);

	/* Precedence */
	result = a + b * c; printf("a + b * c = %i\n", result);
	printf("a * b + c * d = %i\n", a*b+c*d);
}