#include "stdio.h"
#include "conio.h"

#define MAX 30
struct stack
{	char data[20];
	int top;
};

int evaluate_expression(char * string);
int push(char character, struct stack *ptr_stack);
char pop(struct stack *ptr_stack);

int main(void)
{	char string[MAX];	//String Array to accept the Expression
	
	//Accepting the String
	printf("\n\t\tEnter a String ==> ");
	gets(string);
		
	//Evaluting the Expression
	if (evaluate_expression(string))
	{	printf("\n\tYour Expression is VALID");
	}
	else
	{	printf("\n\tYour Expression is INVALID");
	}
	
	return 1;
}

int evaluate_expression(char * string)
{	struct stack my_stack;	//Declaring the Stack
	int traveller=0;
	char character = *(string+traveller);

	my_stack.top = -1;		//Initialize the Top of Stack

	if (character != '\0')
	{	while(character != '\0')
		{   int i=0;
			printf("\n\t\tEvaluating ==> %c | ",character);

			for(;i<=my_stack.top; i++)
			{   printf("%3c",my_stack.data[i]);
			}

			if ((character != '(') && (character != ')'))
				;
			else if (character == '(')
				push('(',&my_stack);	//Push the left parenthesis and continue...
			else if (character == ')')
			{	if (my_stack.top != -1)
				{	if (!(pop(&my_stack)))
					{    return 0;	//Invalid Right Parenthesis
					}
				}
				else
				{	return 0;	//Invalid Right Parenthesis
				}
			}
			
			traveller++;
			character = *(string+traveller);
		}

		if (my_stack.top != -1)
		{	return 0;	//Invalid no. of left parenthesis
		}
		return 1;
	}
	else
	{	return 0;
	}
}

int push(char character, struct stack *ptr_stack)
{	if (ptr_stack->top != (MAX-1))
	{	ptr_stack->top++;
		ptr_stack->data[ptr_stack->top] = character;
		return 1;
	}
	else
	{	return 0;
	}
}
char pop(struct stack *ptr_stack)
{	//char pop_char;
	if (ptr_stack->top != -1)
	{	//pop_char = ptr_stack->data[ptr_stack->top];
		ptr_stack->top--;
		return 1;
	}
	else
	{	return 0;
	}
}
