/* Magic Number Program #1 using if statement. */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{	int magic;		/* Magic Number */
	int guess;		/* User's Guess */

	magic = rand();		/* Generate the Magic Number */

	printf("\nGuess the Magic Number : "); scanf("%d", &guess);
	if (guess == magic) printf("\n*** RIGHT ***");

	return 0;
}