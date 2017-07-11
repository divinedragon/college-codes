#include<stdio.h>
void sqr(int num1, int *num2);
void main(void)
{	int num; clrscr();
	printf("Enter a Number : "); scanf("%d",&num);
	sqr(num, &num); getch();
}
void sqr(int num1, int *num2)
{	printf("\nSquare of %d - By Value : %d", num1, (num1 * num1));
	printf("\nSquare of %d - By Reference : %d", *num2, ((*num2)*(*num2)));
}