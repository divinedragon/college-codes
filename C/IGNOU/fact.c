#include <stdio.h>

int factorial(int number) {

	if (number == 1)
		return 1;
	else
		return number * factorial(number - 1);
}

void main(void) {

	int number;

	printf("\nEnter a number ==> "); scanf("%d", &number);
	printf("\nFactorial of %d ==> %d", number, factorial(number));

}