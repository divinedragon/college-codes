/*This Program displays clusters of stars in a well defined manner.*/
# include <stdio.h>
void main()
{	int i=0,j=0,k=0;
	clrscr();
	for (i=1;i<=5;i++) //First Cluster Starts Here.
	{	for (j=1;j<=i;j++) printf("*");
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=5;i++) //Second Cluster Starts Here.
	{	for (j=5;j>=i;j--) printf("*");
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=5;i++) // Third Cluster Starts Here.
	{       for (j=5;j>=i;j--) printf(" ");
		for (k=1;k<=i;k++) printf("* ");
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=5;i++) //Fourth Cluster Starts Here.
	{       for (j=1;j<=i;j++) printf(" ");
		for (k=5;k>=i;k--) printf("* ");
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=5;i++) //Fifth Cluster Starts Here.
	{       gotoxy(10,i);
		for (j=5;j>=i;j--) printf(" ");
		for (k=1;k<=i;k++) printf("*");
		printf("\n");
	}
	printf("\n");
	for ( i=1;i<=5;i++) //Sixth Cluster Starts Here.
	{       gotoxy(10,6+i);
		for (j=1;j<=i;j++) printf(" ");
		for (k=5;k>=i;k--) printf("*");
		printf("\n");
	}
	getch();
}