/* This Program converts celcius temperature to fahrenheit & vice-versa.*/
# include<stdio.h>
# include<conio.h>
void main()
{
	int choice=0;
	float temp=0;
	clrscr();
	printf("\n\t\t\t============================");
	printf("\n\t\t\tTemperature Conversion Menu");
	printf("\n\t\t\t============================");
	printf("\n\n\t\t1.  FAHRENHIET TO CELCIUS");
	printf("\n\t\t2.  CELCIUS TO FAHRENHIET");
	printf("\n\n\t\tEnter Your Choice : "); scanf("%d",&choice);
	switch (choice)
	{
	   case 1 :
	      printf("\n\n\t\tEnter Fahrenhiet Temperature : ");
	      scanf("%f",&temp); temp=((5*(temp-32))/9);
	      printf("\n\n\t\tEquivalent Celcius Temperature : %0.1f",temp);
	      break;
	   case 2 :
	      printf("\n\n\t\tEnter Celcius Temperature : ");
	      scanf("%f",&temp); temp=((9*temp)/5)+32;
	      printf("\n\n\t\tEquivalent Celcius Temperature : %0.1f",temp);
	      break;
	   default : printf("\n\n\t\t\tINVALID CHOICE. PROGRAM ABORTED.");
	}
	getch();
}