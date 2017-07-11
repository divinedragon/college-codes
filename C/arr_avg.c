/*This Program accepts marks of 5 students and displays the average of
the entered marks. */
#include<stdio.h>
#include<conio.h>
float avg(int *mrk);
void main()
{
	int mark[4],i;			//Declaration of Variables
	clrscr();			//Clearing the Screen
	for(i=0;i<5;i++)		//Loop for Accepting the Values
	{  printf("Enter Marks of Student #%d :  ",i+1);
	   scanf("%d",&mark[i]);
	}
	printf("\nAverage Marks of Students: %.2f",avg(mark)); //Displays Average
	getch();			//Wait
}
float avg(int *mrk)
{	int i, average=0;
	for(i=0; i<5; i++)
	{   average = average + mrk[i];
	}
	return ((float) (average/i));
}