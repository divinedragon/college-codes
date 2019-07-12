#include<stdio.h>
#include<alloc.h>
#include<conio.h>

#define MAX 10

struct stack
{	int value[MAX];
	int top;
};

struct stack test_stack;

int push(int data);
int pop(void);

void main(void)
{	int choice;
	int i;
	int data;

	test_stack.top = -1;

	do
	{
		clrscr();
		printf("\n\n\t\tStack Operations");

		if (test_stack.top!=-1)
		{   printf("\nStack Values ==> \n");
			for(i=0; i<=test_stack.top; i++)
			{	printf("%5d",test_stack.value[i]);
			}
		}

		printf("\n\n\t1.  Push a Value");
		printf("\n\t2.  Pop a Value");
		printf("\n\t5.  Exit");
		printf("\n\t\t\tENTER YOUR CHOICE ==> ");
		scanf("%d",&choice);

		switch (choice)
		{	case 1:
					printf("\n\t\t\tEnter a Value ==> ");
					scanf("%d",&data);
					if (push(data))
					{	printf("\n\t\tVALUE PUSHED INTO THE STACK SUCCESSFULLY");
					}
					else
					{	printf("\n\t\tERROR OCCURRED WHILE PUSH OPERATION");
					}
					getch();
					break;
			case 2:
					data = pop();
					if (data!=-32768)
					{	printf("\n\t\tVALUE POPPED ==> %d",data);
					}
					else
					{	printf("\n\t\tERROR OCCURRED WHILE POP OPERATION");
					}
					getch();
					break;
			case 5:
					printf("\n\t\tTHANK YOU FOR USING THIS PROGRAM");getch();break;
			default: printf("\n\n\tINVALID CHOICE. PLEASE RE-CHOOSE");
						  getch();
		}

	}while(choice != 5);
}

int push(int data)
{   if (test_stack.top == (MAX-1))
	{	printf("\n\t\t\tStack is full - OVERFLOW");
		return 0;
	}
	else
	{	test_stack.top++;
		test_stack.value[test_stack.top] = data;
	}
	return 1;
}

int pop(void)
{   int pop_value;
	if (test_stack.top==-1)
	{	printf("\n\t\t\t\tStack is Empty - UNDERFLOW");
		//printf("\t%d",NULL);
		return -32768;
	}
	else
	{	pop_value =test_stack.value[test_stack.top];
		test_stack.top--;
		return pop_value;
	}
}