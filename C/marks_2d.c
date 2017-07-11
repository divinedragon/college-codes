#include<stdio.h>
#include<conio.h>
void main()
{
	int mark[5][5],r,c,s,x,y,stu_tot,sub_tot;
	int smark[5]; char sub[5][3] = {"Eng",
					"Hin",
					"Mat",
					"Sci",
					"Soc"};
	stu_tot=sub_tot=0; clrscr();
	for(r=0;r!=5;r++)
	{
	   fflush(stdin);
	   clrscr(); printf("\nEnter Marks for Student #%d\n",r+1);
	   for(c=0;c!=5;c++)
	   {
	      printf("Enter ");
	      for(y=0;y!=3;y++)
	      {
		 printf("%c",sub[c][y]);
	      }
	      printf(" Marks : "); scanf("%d",&mark[r][c]);
	   }
	}
	for(r=0;r!=5;r++)
	{
	   clrscr(); printf("\nSummary for Student #%d\n",r+1);
	   stu_tot=0;
	   for(c=0;c!=5;c++)
	   {
	      for(y=0;y!=3;y++)
	      {
		 printf("%c",sub[c][y]);
	      }
	      printf(" Marks : %d\n",mark[r][c]);
	      stu_tot=stu_tot+mark[r][c];
	   }
	   smark[r]=stu_tot;
	   printf("\n\nTotal Marks of Student : %d",stu_tot);
	   printf("\tAverage Marks : %d",stu_tot/5);
	   getch();
	}
	clrscr();
	printf("\nTotal Marks of Individual Students\n");
	for(r=0;r!=5;r++)
	{
	   printf("\nStudent #%d : %d",r+1,smark[r]);
	}
	getch();
	for(r=0;r!=5;r++)
	{
	   clrscr(); printf("\nSummary for Subject #%d",r+1);
	   sub_tot=0;
	   for(c=0;c!=5;c++)
	   {
	      printf("\nStudent #%d : %d",c+1,mark[c][r]);
	      sub_tot=sub_tot+mark[c][r];
	   }
	   printf("\n\nTotal Marks in Subject : %d",sub_tot);
	   printf("\tAverage Marks in Subject : %d",sub_tot/5);
	   getch();
	}
	printf("\n\nThat's all. Thank You.");
	getch();
}