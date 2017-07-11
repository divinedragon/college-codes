# include <stdio.h>
# include <conio.h>
void main()
{       int eng=0,mat=0,hin=0,tot=0; float avg=0; clrscr();
	printf("\nEnter English Marks : "); scanf("%d",&eng);
	printf("\nEnter Hindi Marks : "); scanf("%d",&hin);
	printf("\nEnter Maths Marks : "); scanf("%d",&mat);
	tot=eng+hin+mat; avg = (float) tot/3;
	printf("\n\n\nTotal Marks : %d",tot);
	printf("\nAverage Marks : %0.2f\t\t", avg);
	if (avg>=80) printf("\nGrade : A");
	else
	   if (avg>=60 && avg<80) printf("\nGrade : B");
	   else
	      if (avg>=45 && avg<60) printf("\nGrade : C");
	      else printf("Grade : F");
	getch();
}