#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void card(int t);
void main()
{       int c; clrscr(); fflush(stdin);
	printf("\n\t\t\t     VIDEOCON CUP 2005");
	printf("\n\t\t\t\tSCORE CARD");
	for(c=0;c<20;c++)
	{   gotoxy(36,5+c); printf("||");
	}
	card(0); //Displays Score Card for Team1
	card(45); // Displays Score Card for Team2
	getch();
}
void card(int t)
{       int run[11],total=0,max=0,c,p;
	for(c=0;c<11;c++)
	{  gotoxy(5+t,5+c); printf("Player #%d :  ",c+1);
	   run[c]=(rand()%10)+random(100);
	   printf("%d",run[c]);
	   if (run[c]>max)
	   {  max=run[c]; p=c;
	   }
	   total=total+run[c];
	}
	gotoxy(4+t,20); printf("Total : %d/10",total); total=0;
	gotoxy(4+t,21); printf("Top Score : %d(Player #%d)",run[p],p+1);
	gotoxy(1+t,23); printf("Fall of Wickets"); p=0;
	for(c=0;c<=5;c++)
	{  total=total+run[c];
	   gotoxy(1+t+(6*c),24); printf("%d/%d",total,c+1);
	}
	for(c=6;c<=10;c++)
	{  total=total+run[c];
	   gotoxy(1+t+(7*p),25); printf("%d/%d",total,c+1); p++;
	}
}