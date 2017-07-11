#include<stdio.h>
#include<conio.h>
void main()
{	int operation, num1, num2, result;
	char yesno = 'Y';
	do
	{       clrscr();
		printf("\nEnter First Number : "); scanf("%d", &num1);
		printf("\nEnter Second Number : "); scanf("%d", &num2);
		do
		{	printf("\n\n\t1.  Addition");
			printf("\n\t2.  Subtraction");
			printf("\n\t3.  Multiplication");
			printf("\n\t4.  Division");
			printf("\nPlease Choose Your Operation : ");
			scanf("%d",&operation);
			if (operation<1 || operation>4)
			{	printf("\nWRONG CHOICE. CHOOSE AGAIN.");
			}
		}while(operation<1 || operation>4);
		switch (operation)
		{	case 1: result = num1+num2; break;
			case 2: result = num1-num2; break;
			case 3: result = num1*num2; break;
			case 4: result = num1/num2; break;
		}
		printf("\n\nThe Result after chosen operation is : %d", result);
		printf("\nDo You wish to continue.. (Y/N): ");
		yesno = getch();
	}while(yesno == 'y' || yesno == 'Y');
}