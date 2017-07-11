/*This Program displays the greatest & smallest number of 3 entered numbers. */
# include <stdio.h>
# include <conio.h>
void main()
{	int x,y,z; x=y=z=0; clrscr();
	printf("\nEnter Number #1 : \t"); scanf("%d",&x);
	printf("\nEnter Number #2 : \t"); scanf("%d",&y);
	printf("\nEnter Number #3 : \t"); scanf("%d",&z);
	if (x>y)
	{  if (x>z)
	   {  printf("\n\nGreatest Number : %d",x);
	      if (y>z) printf("\n\nSmallest Number : %d",z);
	      else printf("\n\nSmallest Number : %d",y);
	   }
	   else
	   {  printf("\n\nGreatest Number : %d",z);
	      printf("\n\nSmallest Number : %d",y);
	   }
	}
	else
	{  if (y>z)
	   {  printf("\n\nGreatest Number : %d",y);
	      if (z>x) printf("\n\nSmallest Number : %d",x);
	      else printf("\n\nSmalleest Number : %d",z);
	   }
	   else
	   {  printf("\n\nGreatest Number : %d",z);
	      printf("\n\nSmallest Number : %d",x);
	   }
	}
	getch();
}