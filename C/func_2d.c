#include<stdio.h>
#include<conio.h>
void data_input(int *a);
void data_output(int *b);
void sub_disp(int x);
void main()
{       int mark[5][5]; clrscr();
	data_input(&mark[0][0]);
	data_output(&mark[0][0]);
	getch();
}
void data_input(int *a)
{       int r,c;
	for(r=0;r!=5;r++)
	{  clrscr(); fflush(stdin);
	   printf("\nEnter Marks for Student #%d\n",r+1);
	   for(c=0;c!=5;c++)
	   {  printf("Enter "); sub_disp(c); printf(" Marks : ");
	      scanf("%d",((a+(5*r)+c)));
	   }
	}
}
void data_output(int *b)
{       int r,c,stu_tot=0,sub_tot=0; int smark[5];
	for(r=0;r!=5;r++)
	{  clrscr(); printf("\nSummary for Student #%d\n",r+1);
	   stu_tot=0;
	   for(c=0;c!=5;c++)
	   {   sub_disp(c); printf(" Marks : %d\n",*((b+(5*r))+c));
	       stu_tot=stu_tot+*((b+(5*r))+c);
	   }
	   smark[r]=stu_tot;
	   printf("\n\nTotal Marks of Student : %d",stu_tot);
	   printf("\tAverage Marks : %d",stu_tot/5);
	   getch();
	}
	clrscr();
	printf("\nTotal Marks of Individual Students\n");
	for(r=0;r!=5;r++)
	{  printf("\nStudent #%d : %d",r+1,smark[r]);
	}
	getch();
	for(r=0;r!=5;r++)
	{  clrscr(); printf("\nSummary for Subject : ");
	   sub_disp(r); sub_tot=0;
	   for(c=0;c!=5;c++)
	   {  printf("\nStudent #%d : %d",c+1,*((b+(5*c)+r)));
	      sub_tot=sub_tot+*((b+(5*c)+r));
	   }
	   printf("\n\nTotal Marks in Subject : %d",sub_tot);
	   printf("\tAverage Marks in Subject : %d",sub_tot/5);
	   getch();
	}
	printf("\n\nThat's all. Thank You.");
}
void sub_disp(int x)
{   int y,z; char sub[5][3] = {"Eng",
			     "Hin",
			     "Mat",
			     "Sci",
			     "Soc"};
    for(z=0;z<1;z++)
    {   for(y=0;y!=3;y++)
	{   printf("%c",sub[x][y]);
	}
    }
}