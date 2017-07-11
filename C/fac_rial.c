/* This Program calculates the factorial of a number using loop. */
# include <stdio.h>
# include <conio.h>
void main()
{       int x=1,ans=1,loop=1; clrscr();
	printf("\nEnter a Number : \t"); scanf("%i",&x);
	for (loop=1;loop<=x;loop++)
		ans = ans*loop;
	printf("\nThe Factorial of %i is : %i",x,ans);
	getch();
}
