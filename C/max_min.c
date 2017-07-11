/* This program calculates maximum & minimum from a set of numbers. */
# include <stdio.h>
# include <conio.h>
void main()
{       int loop=1,c=0,num=0,max=0,min=32767; clrscr();
	printf("\nEnter Numbers to be Entered :\t"); scanf("%d",&c);
	for (loop=1;loop<=c;loop++)
	{	printf("Enter Number for Element %d :\t",loop);
		scanf("%d",&num);
		if (num>=max) max = num;
		if (num<min) min = num;
	}
	printf("\n\nMaximum of the Entered Numbers : %d",max);
	printf("\nMinimum of the Entered Numbers : %d",min);
	getch();
}