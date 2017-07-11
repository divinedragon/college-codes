/* This Program enters base value & power value and displays the result. */
#include<stdio.h>
#include<conio.h>
void main()
{       int x=0,y=0,loop=0,ans = 1; clrscr();
	printf("\nEnter Value of Base :\t"); scanf("%i",&x);
	printf("Enter Value of Power :\t"); scanf("%i",&y);
	for (loop=1;loop<=y;loop++)
		ans = ans*x;
	printf("\n\nThe Answer is : %i",ans);
	getch();
}