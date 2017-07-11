#include <stdio.h>

int fibonacci(int number) {
	if ((number == 1) || (number == 0))
		return number;
	else
		return fibonacci(number-1) + fibonacci(number-2);
}

void main(void) {
	int count;

	printf("\nHow many number you want to print? ==> ");
	scanf("%d", &count);

	for ( ; count > 0; count--) {
		printf("%5d", fibonacci(count));
	}
}