#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct ll
{	int data;
	struct ll *next;
}; //*ptr, *start, *ptr1;
void display_ll(struct ll *begin);
void main()
{	struct ll *ptr1, *start, *ptr2; //Pointers to Linked Lists
	char yesno ='y'; start = NULL;
	clrscr();
	while(yesno == 'y')		// Insertion of Nodes //
	{   ptr1= (struct ll *) malloc(sizeof(struct ll));
	    printf("\nEnter a Number : "); scanf("%d", &ptr1->data);
	    if(start==NULL)		// Inserting New Node Fist Time //
	    {   printf("Starting of the Linked List\n" );
		start = ptr1;  ptr2 = ptr1;  ptr1->next = NULL;
		printf("Value at Start is : %d\n", start->data);
	    }
	    else
	    {	printf("Next Node of the Linked List\n");
		ptr2->next = ptr1; 	// Inserting Node at Last //
		ptr1->next = NULL;
		ptr2 = ptr1;
	    }
	    fflush(stdin);
	    printf("Do U Want to Continue(Y/N) : "); scanf("%c", &yesno);
	}
	display_ll(start);
}
void display_ll(struct ll *begin)
{	struct ll *ptr1;
	for(ptr1 = begin; ptr1; ptr1=ptr1->next)
	{   printf("%d--->",ptr1->data);
	    printf("%u\n",ptr1->next);
	}
	getch();
}