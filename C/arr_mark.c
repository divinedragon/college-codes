#include<stdio.h>
#include<conio.h>
void main()
{	int mark[3][3],r,c,stu_tot=0,sub_tot=0; clrscr();
	for(r=0;r<3;r++)
	{  clrscr();
	   printf("\nEnter Marks for Student #%d : \n\n",r+1);
	   for(c=0;c<3;c++)
	   {   printf("Enter Marks : "); scanf("%d",&mark[r][c]);
	   }
	}
	for(r=0;r<3;r++)
	{  clrscr(); stu_tot=0;
	   printf("\nMarks of Srudent #%d",r+1);
	   for(c=0;c<3;c++)
	   {  printf("\nMarks : %d",mark[r][c]);
	      stu_tot=stu_tot+mark[r][c];
	   }
	   printf("\nAverage Marks of Student #%d : %0.2f",r+1,(float) stu_tot/3);
	   getch();
	}
	for(c=0;c<3;c++)
	{  clrscr(); sub_tot = 0;
	   printf("\nMarks for Subject #%d",c+1);
	   for(r=0;r<3;r++)
	   {   printf("\nStudent #%d : %d",r+1,mark[r][c]);
	       sub_tot = sub_tot + mark[r][c];
	   }
	   printf("\nAverage Marks for Subject #%d : %0.2f",c+1, (float) sub_tot/3);
	   getch();
	}
	getch();
}