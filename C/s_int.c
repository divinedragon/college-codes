/*This Program calculates Simple Interest.*/
# include<stdio.h>
# include<conio.h>
void main()
{
	float principle=0,rate=0,time=0,interest=0;
	clrscr();
	printf("\n\t\tSIMPLE INTEREST CALCULATOR");
	printf("\n\n\tEnter Principle Amount : "); scanf("%f",&principle);
	printf("\n\tEnter Rate of Interest : "); scanf("%f",&rate);
	printf("\n\tEnter Time (in Years) : "); scanf("%f",&time);
	interest = (principle*rate*time)/100;
	printf("\n\n\t\tInterest : %0.2f",interest);
	printf("\n\n\t\tAmount : %0.2f",principle+interest);
	getch();
}