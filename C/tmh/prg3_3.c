/* Magic Number Program #3 using Nested ifs */
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
	else
	{   printf("\n*** WRONG ***");
	    if (guess > magic) printf("\nTOO HIGH");
	    else printf("\nTOO LOW");
	}

	return 0;
}