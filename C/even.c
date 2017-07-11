/* This Program displays first 100 even & odd numbers. */
# include <stdio.h>
# include <conio.h>
void main()
{       int loop=1; clrscr();
	printf("\nThese are First 100 Even Numbers.\n");
	for (loop=1;loop<=200;loop++)
		if (loop%2==0) printf("%d\t",loop);
	printf("\nThese are First 100 Odd Numbers.\n");
	for (loop=1;loop<=200;loop++)
		if (loop%2!=0) printf("%d\t",loop);
	getch();
}