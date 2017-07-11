/* This Program displays whether the number entered is prime or not. */
# include <stdio.h>
# include <conio.h>
void main()
{	int num=0,loop=1,x=0;
	clrscr();
	printf("\nEnter a Number : \t"); scanf("%d",&num);
	for (loop=2; loop<num; loop++)
		if (num%loop==0) { x=1; break; }
	if (x==1)
		printf("\n\nThe Number, %d is not Prime.",num);
	else
		printf("\n\nThe Number, %d is Prime.",num);
	getch();                                                                                 
}
