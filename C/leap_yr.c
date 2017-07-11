/* This program determines whether a year is leap year or not. */
/* Leap Year is year which is divisible by 4 and the year ending with 00
   should also be divisible by 400. */
# include<stdio.h>
# include<conio.h>
void main()
{
	int yr=0, yr1, yr2;
	/* yr stores the original value.
	   yr1 stores the last two digit of the the year.
	   yr2 stores the first two digit of the year. */

	clrscr();
	printf("\nEnter a Year : "); scanf("%d",&yr);

	yr1 = yr%100; yr2 = yr/100;
	/* The above statement stores values into yr1 and yr2. */

	if (yr1==0)	//This if checks for years ending in 00.
	{  if(yr2%4==0) // This if checks for leap year.
	      printf("The Year, %d is a Leap Year.", yr);
	   else
	      printf("The Year, %d is not a Leap Year.", yr);
	}
	else   	         // This if checks the years not ending in 00.
	{  if(yr1%4==0)  // This if checks for leap year.
	      printf("The Year, %d is a Leap Year.", yr);
	   else
	      printf("The Year, %d is not a Leap Year.", yr);
	}
	getch();
}