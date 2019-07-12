/*
Written By - Deepak Shakya
Date - 08/01/2008

	THIS PROGRAM DEMOSTRATES ALL POSSIBLE OPERATION OF LINKED LIST.
	FOLLOWING OPERATIONS ARE DONE BY THIS PROGRAM.
	1.  Adding NODES at the begining, middle, and at the end.
	2.  Deleting NODES from the begining, middle, and at the end.
	3.  Displaying the List
	4.  Counting the NODES in the List.
	5.  Sorting the List in a given order.
	6.  Reversing the List.
*/

/*  INCLUDE THE REQUIRED FILES  */
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
//#include<stdlib.h>

#define EXIT_CODE 10



/*  DEFINING THE STRUCTURE OF THE NODES OF THE LIST  */
struct node
{	int data;           //Data part. Stores the Data
	struct node *next;  //Stores the address of the next NODE
};


/*  GLOBAL VARIABLES  */
int total_nodes = 0;          //Stores the total nodes in the link list
struct node *first_node=NULL; //Stores the address of first node
struct node *last_node=NULL;  //Stores the address of last node



/*  PROTYPE DECLARATION OF THE CUSTOM FUNCTION USED  */
void dynamic_menu(int selected);

/* FOLLOWING FUNCTIONS ARE USED TO INSERT A NEW NODE IN THE LINK LIST */
struct node * accept_node_value(void);  //Accept the Value of the New Node
int accept_position(int choice);  //Accepts the Position of the Node specified by the User
void insert_menu(void);  //Shows the Sub Menu for NODE Insertion
void insert_node(struct node *new_node, int position);  //Inserts a Node in the List at the specified position

/* FOLLOWING FUNCTIONS ARE USED TO DELETE A NODE FROM THE LINK LIST */
void delete_menu(void);  //Shows the Submenu for NODE Deletion
int accept_position_delete(int choice);  //Accept the Position of the NODE Specified by the User

void display_list();  //Show the entire link list on the screen



int main(void)
{	int choice=7;

	do
	{  /*  DISPLAY THE VARIOUS OPTIONS TO THE USER  */
		dynamic_menu(0);

		/*  ACCEPT THE USER CHOICE  */
		printf("\n\n\t\t\tEnter Your Choice ==> ");
		scanf("%d",&choice);

		/*  PERFORM ACTION BASED ON USER CHOICE  */
		switch (choice)
		{	case 1: insert_menu(); break;
			case 2:
			case 3: display_list(); break;
			case 4:
			case 5:
			case 6: printf("\n\t\t\t    Your Choice ==> %d",choice); break;
			case EXIT_CODE: printf("\n\t\t     THANK YOU FOR USING THIS PROGRAM");
					  printf("\n\t\t\t     HAVE A NICE DAY."); break;
			default: printf("\n\t\t     Invalid Choice. Please Choose Again.");
						printf("\n\t\t\t  Press any key to Continue....");
		}

		getch();


	}while(choice != EXIT_CODE);
	return 1;
}

void dynamic_menu(int selected)
{  clrscr();  /* CLEARING THE SCREEN  */

	printf("\n\n\t\t\tWORKING WITH LINKED LIST");
	printf("\n\n\t\t\t     Operation Menu\n\n");

	if (!(selected))
	{	printf("\n\t\t(1).  Insert NODE");
		printf("\n\t\t(2).  Delete NODE");
		printf("\n\t\t(3).  Display the LIST");
		printf("\n\t\t(4).  Display TOTAL ITEMS in LIST");
		printf("\n\t\t(5).  Sort the Current LIST");
		printf("\n\t\t(6).  Reverse the LIST");
		printf("\n\t\t(%d).  EXIT",EXIT_CODE);
	}
	else
	{	switch (selected)
		{	case 1:
				printf("\n\t\t(1).  Insert NODE");
				printf("\n\t\t\t(1). At the BEGINING of LIST");
				printf("\n\t\t\t(2). Before the Specified NODE");
				printf("\n\t\t\t(3). After the Specified NODE");
				printf("\n\t\t\t(4). At the END of the LIST");
				break;
			case 2:
				printf("\n\t\t(2).  Delete NODE");
				printf("\n\t\t\t(1). At the BEGINING of LIST");
				printf("\n\t\t\t(2). Previous to the Specified NODE");
				printf("\n\t\t\t(3). Next to the Specified NODE");
				printf("\n\t\t\t(4). At the END of the LIST");
				break;
			case 3: printf("\n\t\t(3).  Display the LIST"); break;
			case 4: printf("\n\t\t(4).  Display TOTAL ITEMS in LIST"); break;
			case 5:
				printf("\n\t\t(5).  Sort the Current LIST");
				printf("\n\t\t\t(1). Ascending Order");
				printf("\n\t\t\t(2). Descending Order");
				break;
			case 6: printf("\n\t\t(6).  Reverse the LIST"); break;
		}
		printf("\n\t\t(%d).  Go to Previous Menu",EXIT_CODE);
	}
}

void insert_menu(void)
{  struct node *temp;  //Stores the address of newly created NODE
	int choice;  //Stores the choice of the user for Inserting

	do
	{  /*  DISPLAYING THE VARIOUS INSERT OPTIONS TO THE USER  */
		dynamic_menu(1);

		/*  ACCEPT THE USER CHOICE  */
		printf("\n\n\t\t\tEnter Your Choice ==> ");
		scanf("%d",&choice);

		/*  PERFORM ACTION BASED ON USER CHOICE  */
		switch (choice)
		{	case 1:
						/* NODE INSERTION AT THE BEGINING */
						temp = accept_node_value();  //Accept the Node Details
						//printf("\nAddress got back ==> %u",temp);
						if(temp != NULL)  //Check for any allocation error
							insert_node(temp,0);         //Insert the Node at Begining
						break;
			case 2:
						/* NODE INSERTION BEFORE THE SPECIFIED NODE */
			case 3:
						/* NODE INSERTION AFTER THE SPECIFIED NODE */
						/* For case 2 and 3, the Node has to be inserted in the
							middle of the link list. So we accept the position
							of the Node to determine where actually we have
							to insert the newly created node.
						*/
						temp = accept_node_value();  //Accept the Node Details
						//printf("\nAddress got back ==> %u",temp);
						if(temp != NULL)  //Check for any allocation error
							insert_node(temp,accept_position(choice));  //Insert the Node at the Position specified by the user
						break;
			case 4:
						temp = accept_node_value(); //Accept the Node Details
						//printf("\nAddress got back ==> %u",temp);
						if(temp != NULL)  //Check for any allocation error
							insert_node(temp,total_nodes);
						break;
			case EXIT_CODE: break;
			default: printf("\n\t\t     Invalid Choice. Please Choose Again.");
						printf("\n\t\t\t  Press any key to Continue...."); getch();
		}
	}while(choice != EXIT_CODE);
	return ;
}

struct node * accept_node_value(void)
{	struct node *new_node = (struct node *) malloc(sizeof(struct node));

	if(new_node != NULL)
	{	printf("\n\t\t\tEnter a Value ==> ");
		scanf("%d",&new_node->data);
	}
	else
	{  printf("\n\t\tMemory full. Can't allocate memory.");
	}
	//printf("\nAddress Allocated ==> %u",new_node);
	new_node->next = NULL;
	//printf("\nValue Stored ==> %d",new_node->next);
	return new_node;
}

int accept_position(int choice)
{  int position;

	if (choice == 2)
	{	/* NODE SHOULD BE INSERTED BEFORE THE ACCEPTED POSITION */
		printf("\n\t\t\tInsert Node BEFORE Node #==> ");
		scanf("%d",&position);
		position--;
		if (position < 0)
		{	printf("\n\t\tPosition out of range. Inserting Node at the BEGINING");
			position = 0;
		}
		else if(position >= total_nodes)
		{	printf("\n\t\tPosition out of range. Inserting Node at the END");
			position = total_nodes;
		}
	}
	else
	{	/* NODE SHOULD BE INSERTED AFTER THE ACCEPTED POSITION */
		printf("\n\t\t\tInsert Node BEFORE Node #==> ");
		scanf("%d",&position);
		if (position > total_nodes)
		{	printf("\n\t\tPosition out of range. Inserting Node at the END");
			position = total_nodes;
		}
		else if(position <= 0)
		{	printf("\n\t\tPosition out of range. Inserting Node at the BEGINING");
			position = 0;
		}
	}
	return position;
}

void insert_node(struct node *new_node, int position)
{  struct node *temp; //Used to traverse through the list

	/*  CREATING A NEW NODE  */
	/*  Date : 19-02-2008
	CODE REMOVED DUE TO ADDITION OF FURTHER FUNCTIONALITY.
	NOW THE FUNCTIONS ARE MUCH MORE DYNAMIC.
	THE VALUES OF THE NODE ARE ACCEPTED IN A DIFFERENT FUNCTION
	accept_node_value() AND THE POSITION IS ACCEPTED IN
	accept_position(). AFTER BOTH HAVE BEEN ACCEPTED, THIS FUNCTION
	IS CALLED WITH THE NODE ADDRESS (*new_node) AND THE POSITION (position)
	WHICH ARE INSERTED IN THIS FUNCTION.

	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	struct node *temp;
	char choice = 'N';

	new_node->data = get_value();  //Store the Accepted Value
	new_node->next = NULL;         //Initialize the NEXT pointer to NULL (Initially)

	*/

	//printf("\nAddress Inserting ==> %u",new_node);
	//printf("\nValue Contained ==> %d",new_node->data);

	if (position==0)               //Insert new node at the begining
	{	if (total_nodes)
		{	new_node->next = first_node;  //Nodes earlier > 0. Insert the new node at the begining
		}
		else
		{	last_node = new_node;
		}
		first_node = new_node;      //Set the first_node value

	}
	else if(position == total_nodes)
	{  last_node->next = new_node;
		last_node = new_node;
	}
	else
	{	//Traverse through the list to locate the position of the new node
		int i;
		temp = first_node;  //Start address of the link list

		/*
		if(position > total_nodes)
		{	printf("\n\t\tPosition out of Range. Insert at the Node at End (Y/N)");
			choice = getche();
			if((choice=='Y') || (choice=='y'))
			{	position = total_nodes;
			}
			else
			{	printf("\n\t\t\tNode insertion Aborted. Press any key to return...");
				getch();
			}
		}

		*/

		for(i=1,temp=first_node; (i<position); i++)
		{  temp = temp->next;
		}

		new_node->next = temp->next;
		temp->next = new_node;
	}
	total_nodes++;
	printf("\n\t\tNode inserted successfully.Press any key...");
	getch();
}




void delete_menu(void)
{  struct node *temp;  //Stores the address of newly created NODE
	int choice;  //Stores the choice of the user for Inserting

	do
	{  /*  DISPLAYING THE VARIOUS INSERT OPTIONS TO THE USER  */
		dynamic_menu(2);

		/*  ACCEPT THE USER CHOICE  */
		printf("\n\n\t\t\tEnter Your Choice ==> ");
		scanf("%d",&choice);

		/*  PERFORM ACTION BASED ON USER CHOICE  */
		switch (choice)
		{	case 1:
						/* NODE DELETION FROM THE BEGINING */
						delete_node(0);  //Delete the Node at Begining
						break;
			case 2:
						/* NODE DELETION BEFORE THE SPECIFIED NODE */
			case 3:
						/* NODE DELETION AFTER THE SPECIFIED NODE */
						/* For case 2 and 3, the Node has to be deleted from the
							middle of the link list. So we accept the position
							of the Node to determine actually which node has to be
							deleted.
						*/
						temp = accept_node_value();  //Accept the Node Details
						//printf("\nAddress got back ==> %u",temp);
						if(temp != NULL)  //Check for any allocation error
							insert_node(temp,accept_position(choice));  //Insert the Node at the Position specified by the user
						break;
			case 4:
						temp = accept_node_value(); //Accept the Node Details
						//printf("\nAddress got back ==> %u",temp);
						if(temp != NULL)  //Check for any allocation error
							insert_node(temp,total_nodes);
						break;
			case EXIT_CODE: break;
			default: printf("\n\t\t     Invalid Choice. Please Choose Again.");
						printf("\n\t\t\t  Press any key to Continue...."); getch();
		}
	}while(choice != EXIT_CODE);
	return ;
}






void display_list()
{	struct node *temp;

	printf("\n\n\t\t\tComplete Linked List\n\t");
	for(temp=first_node; temp!=NULL; temp = temp->next)
	{	printf("| %d |",temp->data);
		if (temp->next !=NULL)
		{	printf(" --> ");
		}
	}
	//printf(" |");
}