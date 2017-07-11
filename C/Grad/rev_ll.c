/*

Written By - Deepak Shakya
Date - 03/05/2008

Solution:

*/

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

#define SIZE 10

/* Node Structure */
struct node
{  int value;
	struct node *address;
};

struct node *first,*last;
struct node *top;	//Top of Stack

void display_list(void);
void insert_node(int value);
void reverse_list(void);


int main(void)
{	int i=0;
	int value;

	first = last = top = NULL;

	clrscr();

	for(i=0; i<SIZE; i++)
	{  printf("\nEnter Value for Element #%d ==> ",(i+1));
		scanf("%d",&value);

		insert_node(value);
	}

	display_list();	//Show the list before reversing

	reverse_list();	//Reverse the Linked List Using Stack

	display_list();	//Show the list after reversing

	return 1;
}

void display_list(void)
{
  struct node *temp = first;
	printf("\n\t\tValues of the Linked List\n");

	for( ;temp!=NULL; temp = temp->address)
	{	printf("\t%d",temp->value);
	}
}

void insert_node(int value)
{
  struct node *new_node = (struct node *) malloc(sizeof(struct node));

	new_node->value = value;
	new_node->address = NULL;

	if (first == NULL)
	{	first = last  = new_node;
	}
	else
	{	last->address = new_node;
		last = new_node;
	}
}

void reverse_list(void)
{	struct node *node = first;
	struct node *temp;

	struct node *new_first = NULL;
	int value;

	for(; node!=NULL;)
	{  temp = node;
		value = node->value;
		node = node->address;
		free(temp);

		temp = (struct node *) malloc(sizeof(struct node));
		temp->value = value;
		temp->address = NULL;

		if (new_first == NULL)
		{	new_first = temp;
		}
		else
		{	temp->address = new_first;
			new_first = temp;
		}
	}

	first = new_first;

}