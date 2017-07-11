/* This program displays the digital clock. */
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{	int hh,mm,ss; clrscr();
	printf("\nEnter Current Hour : "); scanf("%d",&hh);
	printf("\nEnter Current Minutes : "); scanf("%d",&mm);
	printf("\nEnter Current Seconds : "); scanf("%d",&ss);
	clrscr();
	while(hh>0 && hh<13) {
	   while(mm>=0 && mm<60) {
	      while(ss>=0 && ss<60) {
		 gotoxy(30,13); printf("%3d:%3d:%3d",hh,mm,ss);
		 ss=ss+1; delay(1250);
	      } mm=mm+1; ss=0;
	   } hh=hh+1; mm=0; ss=0; if (hh==13) hh=1;
	}
}