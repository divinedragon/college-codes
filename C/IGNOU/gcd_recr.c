#include <stdio.h>

int gcd(int number1, int number2) {
	if (number2 == 0) {
		return number1;
	} else {
		return gcd(number2, number1%number2);
	}
}

void main(void) {
	int number1, number2;

	printf("\nEnter 1st Number ==> ");
	scanf("%d", &number1);

	printf("\nEnter 2nd Number ==> ");
	scanf("%d", &number2);

	printf("\nGCD of %d and %d is %d", number1, number2, gcd(number1, number2));
}