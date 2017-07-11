/* This Program displays prime numbers between 1 - 100. */
# include <stdio.h>
# include <conio.h>
void main()
{	int x=0,y=0; clrscr();
	printf("\nThese are prime numbers between 1 & 100.\n");
	for (x=1;x<=100;x++)
	{	for (y=2;y<x;y++)
			if (x%y==0) break;
		if (x==y) printf("%d\t",x);
	}
	getch();
}