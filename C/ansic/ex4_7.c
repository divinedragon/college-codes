/* Evaluate (3.31E-8 + 2.01E-7)/(7.16E-6 + 2.01E-8) */
#include<stdio.h>
void main()
{	float result;

	result = (3.31E-8 + 2.01E-7)/(7.16E-6 + 2.01E-8);
	printf("\n(3.31E-8 + 2.01E-7)/(7.16E-6 + 2.01E-8) = %E", result);
}
