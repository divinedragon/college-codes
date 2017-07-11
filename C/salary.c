/* This program calculates the hra,da,medical,pf & net salary
for a given basic salary. */
# include<stdio.h>
# include<conio.h>
void main()
{
	float bas_sal,hra,da,med,gross,pf,net_sal;
	bas_sal=hra=da=med=gross=pf=net_sal=0.00;
	clrscr();
	printf("\nEnter Your Basic Salary : "); scanf("%f",&bas_sal);
	hra = 0.3*bas_sal; gross=bas_sal+hra;
	if (gross>=12000) da=0.45*gross;
	else if (gross>=8000 && gross<12000) da=0.6*gross;
	   else da=0.75*gross;
	if (bas_sal>=10000) med=0.2*bas_sal;
	else med=hra;
	gross = gross+da+med; pf=0.0833*gross;
	net_sal=gross-pf;
	printf("\n\nBasic Salary : %0.2f",bas_sal);
	printf("\nHRA : %0.2f\t\t\t",hra); printf("DA : %0.2f",da);
	printf("\nMedical : %0.2f\t\t\t",med); printf("Total Salary : %0.2f",gross);
	printf("\nPF : %0.2f",pf);
	printf("\n\nNet Payable Salary : %0.2f",net_sal);
	getch();
}