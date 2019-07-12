#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct dbl_list
{	int data;
	struct dbl_list *previous;
	struct dbl_list *next;
}*start_node,*last_node;

int insert_node(int value, int position);
int delete_node(int position);

void main()
{	struct dbl_list *temp;

	int choice = 5;
	int value;
	int position;

	do
	{
		clrscr();
		printf("\n\t\t\t\tDOUBLE LINK LIST MENU");

		printf("\nStart => %d\t\tLast ==> %d",start_node,last_node);
		if (start_node!=NULL)
		{  printf("\n\t\t\tCurrent List Status\n");
			for(temp = start_node; temp!=NULL; temp=temp->next)
			{	printf("%3d",temp->data);
			}
		}

		printf("\n\t\t1.  Add New Node");
		printf("\n\t\t2.  Delete Existing Node");
		//printf("\n\t\t3.  Display the List");
		printf("\n\t\t5.  Exit");
		printf("\n\n\t\t\tEnter Your Choice ==> ");
		scanf("%d",&choice);
		switch (choice)
		{	case 1:
				printf("\n\t\t\tEnter the Value to Insert ==> ");
				scanf("%d",&value);

				printf("\n\t\t\tEnter Position to Insert ==> ");
				scanf("%d",&position);

				if (insert_node(value,position))
				{	printf("\n\t\t\tINSERT OPERATION SUCCESSFULL");
				}
				else
				{	printf("\n\t\t\tINSERT OPERATION FAILED");
				}
				getch();
				break;
			case 2:
				printf("\n\t\t\tEnter Position of Node to DELETE ==> ");
				scanf("%d",&position);

				if (delete_node(position))
				{	printf("\n\t\t\tDELETE OPERATION SUCCESSFULL");
				}
				else
				{	printf("\n\t\t\tDELETE OPERATION FAILED");
				}
				getch();
				break;
			//case 3:	display_list(start_node);break;
			case 5: printf("\n\t\t\tTHANK YOU FOR USING THIS PROGRAM");
				getch();break;

			default:printf("\n\t\tInvalid Choice. Please Re-choose...");
				getch();
		}
	}while(choice!=5);

}

int insert_node(int value, int position)
{  /* WE ASSUME THAT THE USER GIVES POSITION AS THE FINAL DESTINATION OF
		THE NEW NODE. ALL THE NODES ARE SHIFTED TO RIGHT AFTER INSERTION.
		THAT IS, WE ARE USING INSERT_BEFORE MECHANISM FOR THIS INSERTION.
	*/
	struct dbl_list *new_node = (struct dbl_list *) malloc(sizeof(struct dbl_list));
	struct dbl_list *cur_pos;
	int i;
	//int flag_last = 0;

	if (new_node != NULL)
	{	new_node->data = value;
		new_node->previous = NULL;
		new_node->next = NULL;

		if (start_node == NULL)
		{  start_node = new_node;
			last_node = new_node;
			printf("\nValue(%d) Inserted at %d",value,start_node);
		}
		else
		{	if (position == 1)
			{	start_node->previous = new_node;
				new_node->next = start_node;
				start_node = new_node;
			}
			else
			{  cur_pos = start_node;
				for (i=1; (cur_pos->next != NULL) || (i<=position); i++)
				{  if (cur_pos->next != NULL)
					{	cur_pos = cur_pos->next;
					}
					else
					{  break;
					}
				}

				if ((cur_pos->next == NULL) && (i<position))
				{	last_node->next = new_node;
					new_node->previous = last_node;
					last_node = new_node;
				}
				else
				{	cur_pos->previous->next = new_node;
					new_node->previous = cur_pos->previous;
					new_node->next = cur_pos;
				}
			}
		}

		return 1;
	}
	else
	{	printf("\n\tMEMORY ALLOCATION FAILED");
		return 0;
	}
}
int delete_node(int position)
{	return 1;
}