/* Magic Number Program #4 using if-else-if ladder */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{	int magic;		/* Magic Number */
	int guess;		/* User's Guess */

	magic = rand();		/* Generate the Magic Number */

	printf("\nGuess the Magic Number : "); scanf("%d", &guess);
	if (guess == magic)
	{   printf("\n*** RIGHT ***");
	    printf("\n%d is the magic number.", magic);
	}
	else if (guess > magic)
		 printf("\nWRONG. TOO HIGH");
	     else printf("\nWRONG. TOO LOW");

	return 0;
}