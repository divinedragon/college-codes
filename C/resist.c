/* This Program calculate the value of resistance in series & parallel.*/
#include<stdio.h>
#include<conio.h>
void main()
{	int choice=0,n=0,i=1; float r=0,net=0;
	clrscr();
	printf("\n\t\t\tRESISTANCE CALCULATOR");
	printf("\n\n\t\tResistance in Series ==> 1");
	printf("\n\t\tResistance in Parallel ==> 2");
	printf("\n\n\t\t\tEnter Choice : "); scanf("%d",&choice);
	switch (choice)
	{  case 1:
	      printf("\n\t\tEnter No. of Resistances in Series : ");
	      scanf("%d",&n);
	      do
	      {  printf("\n\tEnter Resistance %d : ",i); scanf("%f",&r);
		 net=net+r; n=n-1; i=i+1;
	      } while (n!=0); break;
	   case 2:
	      printf("\n\t\tEnter No. of Resistances in Parallel : ");
	      scanf("%d",&n);
	      do
	      {  printf("\n\tEnter Resistance %d : ",i); scanf("%f",&r);
		 if (i==1) net = r;
		 else net =1/((1/net)+(1/r)); n=n-1; i=i+1;
	      } while (n!=0); break;
	   default : printf("\n\nINVALID CHOICE.PRESS ANY KEY TO ABORT...");
	}
	printf("\n\n\t\tNET RESISTANCE : %0.2f Ohms",net);
	getch();
}
