/* This Program calculates the roots of a quadratic equation.*/
# include<stdio.h>
# include<conio.h>
# include<math.h>
void main()
{	float a=0,b=0,c=0,d=0,root1=0,root2=0; 	clrscr();
	printf("\nEnter Value of a : "); scanf("%f",&a);
	printf("\nEnter Value of b : "); scanf("%f",&b);
	printf("\nEnter Value of c : "); scanf("%f",&c);
	d=(b*b)-(4*a*c);
	if (d>0)
	{  printf("\n\nThe Equation has Real & Unequal Roots.");
	   root1=((-b)+(sqrt(d)))/(2*a);
	   root2=((-b)-(sqrt(d)))/(2*a);
	   printf("\nRoot 1 is : %0.2f\t\t\t",root1);
	   printf("Root 2 is : %0.2f",root2);
	}
	else
	   if (d==0)
	   {  printf("\n\nThe Equation has Real & Equal Roots.");
	      root1=(-b)/(2*a);
	      printf("\nEqual Root is : %0.2f",root1);
	   }
	   else
	      if (d<0)
	      {  	printf("\nThe Equation has Complex Roots.");
		d=sqrt(-d);
		root1=(-b)/(2*a);
		printf("\n\nComplex Root 1 : %0.2f + i%0.2f",root1,d);
		printf("\nComplex Root 2 : %0.2f - i%0.2f",root1,d);
	      }
	getch();
}