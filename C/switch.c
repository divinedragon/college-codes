#include<stdio.h>
#include<conio.h>
void main()
{
	long int amt=0;
	int qty=0;
	char ecode;
	clrscr();
	printf("\n\t\t\t\tElectronic Item Code");
	printf("\nTV => T"); printf("\nFridge => F"); printf("\nVCD => V");
	printf("\nWashing Machine => W"); printf("\nAudio System => A");
	printf("\n\nEnter Your Code : ");
	scanf("%c",&ecode);
	printf("\nEnter Quantity Purchased : "); scanf("%d",&qty);
	switch (ecode)
	{
	   case 't' :
	   case 'T' : amt = 15000*qty; break;
	   case 'f' :
	   case 'F' : amt = 10000*qty; break;
	   case 'v' :
	   case 'V' : amt = 5000*qty; break;
	   case 'w' :
	   case 'W' : amt = 8000*qty; break;
	   case 'a' :
	   case 'A' : amt = 3900*qty; break;
	   default : printf("\nINVALID CODE. ABORTING...");
	}
	printf("\n\nAmount is : %d",amt);
	getch();
}