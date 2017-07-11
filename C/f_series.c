/* This Program displays the Fabonnaci Series - 0 1 1 2 3 5 8 13 21 */
# include <stdio.h>
# include <conio.h>
void main()
{       int x=0,y=1,sum=0,loop=1;
	clrscr();
	printf("\n\n%6d",x); printf("%6d",y);
	for (loop=1;loop<=20;loop++)
	{       sum=x+y;
		x=y;
		y=sum;
		printf("\t%d",sum);
	}
	getch();
}
