#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{	int data;
	struct node *next;
}*first,*last;

int insert_start(int value);
int insert_middle_before(int value, int position);
int insert_middle_after(int value, int position);
int insert_end(int value);

int main(void)
{	int choice;
	int value;
	int position;
	struct node *temp;
	
	do
	{	clrscr();
		
		printf("\n\t\t\t\tLINKED LIST MENU");

		if (first != NULL)
		{  printf("\n\t\t\tCurrent Items in the List");
			for(temp=first,printf("\n");temp!=NULL; temp=temp->next)
			{	printf("%-4d",temp->data);
			}
		}

		printf("\n\t\t1.  Add Node at the Begining");
		printf("\n\t\t2.  Add Node in the Middle before the Specified Node");
		printf("\n\t\t3.  Add Node in the Middle after the Specified Node");
		printf("\n\t\t4.  Add Node at the End");
		printf("\n\t\t5.  Exit");

		printf("\n\t\t\tEnter Your Choice ==> ");
		scanf("%d",&choice);

		switch (choice)
		{	case 1:	value = accept_input();
				insert_start(value);
				break;
			case 2:	value = accept_input();
				printf("\n\t\t\tEnter Position ==> ");
				scanf("%d",&position);
				insert_middle_before(value,position);
				break;
			case 3: value = accept_input();
				printf("\n\t\t\tEnter Position ==> ");
				scanf("%d",&position);
				insert_middle_after(value,position);
				break;
			case 4:	value = accept_input();
				insert_end(value);
				break;
			case 5:	printf("\n\t\t\tTHANK YOU FOR USING THIS PROGRAM");
				break;
			default: printf("\n\t\tINVALID CHOICE. PLEASE CHOOSE AGAIN."); getch();
		}
	}while(choice != 5);

	return 1;
}

int accept_input()
{	int value;

	printf("\n\t\t\tEnter a Value ==> ");
	if (scanf("%d",&value))
	{	return value;
	}
	else
	{	return -32768;
	}
}

int insert_start(int value)
{	//Explicit Function for Inserting a node at the begining
	struct node *new_node = (struct node *)malloc(sizeof(struct node));

	if (new_node != NULL)
	{	new_node->data = value;
		new_node->next = NULL;

		if (first==NULL)
		{  //This is the First Node. Update first and last pointers
			last = new_node;
			first = new_node;
		}
		else
		{	//Other Nodes are there in the List
			new_node->next = first;
			first = new_node;
		}
		//free(new_node);
		return 1;	//Insertion at the Begining Successful
	}
	else
	{  free(new_node);
		return 0;	//Insertion at the Begining Failed
	}

}

int insert_middle_before(int value, int position)
{	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	struct node *given_pos;
	struct node *prev_pos;
	int i;

	if (new_node != NULL)
	{	new_node->data = value;
		new_node->next = NULL;

		prev_pos = NULL;
		given_pos = first;

		if (position == 1)
		{	new_node->next = first;
			first = new_node;
		}
		else
		{	//For the value of position, we have to run the loop position-1 times
			for(i=1; (given_pos->next != NULL) && (i<position); i++)
			{	prev_pos = given_pos;
				given_pos = given_pos->next;
			}

			new_node->next = given_pos;
			prev_pos->next = new_node;
		}

		//free(new_node);
		return 1;	//Insertion in the Middle of the List Successful
	}
	else
	{  free(new_node);
		return 0;	//Insertion in the Middle of the List Failed
	}
}

int insert_middle_after(int value,int position)
{	struct node *new_node = (struct node *) malloc (sizeof(struct node));
	struct node *given_node;
	int i;

	if (new_node != NULL)
	{	new_node->data = value;
		new_node->next = NULL;

		if (first==NULL)
		{	first = new_node;
			last = new_node;
		}
		else
		{	for(i=2, given_node = first; (given_node->next!=NULL) && (i<=position); i++)
			{  given_node = given_node->next;
			}
			if (given_node == last)
			{	last->next = new_node;
				last = new_node;
			}
			else
			{	new_node->next = given_node->next;
				given_node->next = new_node;

			}
		}

		return 1;
	}
	else
	{	free(new_node);
		return 0;
	}
}

int insert_end(int value)
{	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = NULL;

	if (new_node != NULL)
	{	if (first == NULL)
		{  first = new_node;
			last = new_node;
		}
		else
		{  last->next = new_node;
			last = new_node;
		}
		return 1;
	}
	else
	{  free(new_node);
		return 0;
	}
}