/*This Program accepts marks of 5 students and displays the average of
the entered marks. */
#include<stdio.h>
#include<conio.h>
void main()
{	int mark[4],i,average = 0;	//Declaration of Variables
	clrscr();			//Clearing the Screen
	for(i=0;i<5;i++)		//Loop for Accepting the Values
	{  printf("Enter Marks of Student #%d :  ",i+1);
	   scanf("%d",&mark[i]); average = average+(*(mark+i));
	}
	printf("\nAverage Marks of Students: %.2f",(float) average/i);
	getch();			//Wait
}