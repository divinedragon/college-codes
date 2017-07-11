#include<stdio.h>
#include<conio.h>
void main()
{	int srs[20],p; clrscr();		//Declaration
	srs[0]=0; srs[1]=1;			//Initialization
	for(p=2;p<=20;p++)
	   srs[p]=srs[p-1]+srs[p-2];
	printf("Following is the Fabonacci Series\n");
	for(p=0;p<=20;p++)
	   printf("\n%d",srs[p]);
	getch();
}