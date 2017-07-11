/* This Program converts a Number into its Roman Equivalent. */
#include<stdio.h>
#include<conio.h>
void Func_Thou(int n);
void Func_Hund(int n);
void Func_Tens(int n);
void Func_Unit(int n);
void main(void)
{	int num,rnum,i=0,x,n; clrscr();
	printf("\nEnter a Number: "); scanf("%d",&num);
	rnum = num;
	while (rnum!=0)
	{  i++; rnum=rnum/10;
	}
	printf("\n\nThe Roman Equivalent is  ==>  ");
	while (i!=0)
	{  rnum=1; i--;
	   for(x=i;x>0;x--)
	      rnum = rnum*10;
	   n=num/rnum; num=num%rnum;
	   switch (rnum)
	   {  case 1000: if (rnum!=1000) break; Func_Thou(n); break;
	      case 100:  if (rnum!=100) break; Func_Hund(n); break;
	      case 10:   if (rnum!=10) break; Func_Tens(n); break;
	      case 1:    if (rnum!=1) break; Func_Unit(n);
	   }
	}
	getch();
}
void Func_Thou(int n)
{	switch (n)
	{  case 1: printf("M"); break;
	   case 2: printf("MM"); break;
	   case 3: printf("MMM"); break;
	   case 4: printf("MMMM"); break;
	   case 5: printf("MMMMM"); break;
	   case 6: printf("MMMMMM"); break;
	   case 7: printf("MMMMMMM"); break;
	   case 8: printf("MMMMMMMM"); break;
	   case 9: printf("MMMMMMMMM"); break;
	   case 0: break;
	}
}
void Func_Hund(int n)
{	switch (n)
	{  case 1: printf("C"); break;
	   case 2: printf("CC"); break;
	   case 3: printf("CCC"); break;
	   case 4: printf("CD"); break;
	   case 5: printf("D"); break;
	   case 6: printf("DC"); break;
	   case 7: printf("DCC"); break;
	   case 8: printf("DCCC"); break;
	   case 9: printf("CM"); break;
	   case 0: break;
	}
}
void Func_Tens(int n)
{	switch (n)
	{  case 1: printf("X"); break;
	   case 2: printf("XX"); break;
	   case 3: printf("XXX"); break;
	   case 4: printf("XL"); break;
	   case 5: printf("L"); break;
	   case 6: printf("LX"); break;
	   case 7: printf("LXX"); break;
	   case 8: printf("LXXX"); break;
	   case 9: printf("XC"); break;
	   case 0: break;
	}
}
void Func_Unit(int n)
{	switch (n)
	{  case 1: printf("I"); break;
	   case 2: printf("II"); break;
	   case 3: printf("III"); break;
	   case 4: printf("IV"); break;
	   case 5: printf("V"); break;
	   case 6: printf("VI"); break;
	   case 7: printf("VII"); break;
	   case 8: printf("VIII"); break;
	   case 9: printf("IX"); break;
	   case 0: break;
	}
}