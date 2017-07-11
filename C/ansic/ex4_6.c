/* Evaluate 3x^3 -5x^2 + 6 when x = 2.55 */
#include<stdio.h>
void main()
{	float x = 2.55, result;

	result = (3*x*x*x) - (5*x*x) +6;
	printf("3x^3 -5x^2 + 6 = %f when x = 2.55", result);
}
