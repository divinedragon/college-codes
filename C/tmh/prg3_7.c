/* Magic Number Program #5 using '?' operator in place of if-else. */
#include<stdio.h>
int main(void)
{	int magic;		/* Magic Number */
	int guess;		/* User's Guess */

	magic = rand();		/* Generate the Magic Number */

	printf("\nGuess the Magic Number : "); scanf("%d", &guess);
	if (guess == magic)
	{   printf("\n*** RIGHT ***");
	    printf("\n%d is the magic number.", magic);
	}
	else
	    guess > magic ? printf("\nHIGH") : printf("\nLOW");  /* ? Operator */

	return 0;
}