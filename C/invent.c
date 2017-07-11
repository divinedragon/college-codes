/* This Program is an Inventory Controlf System */
/* DECLARATION OF THE HEADER FILES REQUIRED. */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
/* THE MAIN STRUCTURE OF THE INVENTORY SYSTEM IS DECLARED. */
struct inventory
{	char item[15];			//Name of the Item
	int unit_price;			//Unit Price of the Item
	int count;
	int qty_rcvd;                   //Quantity Recieved
	struct                          //Structure Variable date_rcvd
	{  int month; 				//Month Variable
	   int day;				//Date Variable
	} date_rcvd;
	char supplier[15];		//Supplier's Name
	struct inventory *next;		//Address for Next Node of Data.
};
struct inventory *new_node();
void get_info(struct inventory *node);
void add_node(struct inventory *node, struct inventory **header);
void print_inventory(struct inventory *header);
void main()
{	struct inventory *inv_list = NULL, *p, *new_node();
	char reply[10];
	do
	{   clrscr();
	    p=new_node();
	    if(p==NULL)
	    {   printf("Out of Memory. Can't add any more node.\n");
		*reply = 'n';
	    }
	    else
	    {   get_info(p);
		add_node(p, &inv_list);
		printf("\nItem %s Added Successfully.\n",p->item);
		printf("\n\nDo You Wish To Enter New. (Y/N): ");
		scanf("%s",reply);
	    }
	} while(*reply=='y' || *reply=='Y');
	printf("\nThank You.\n");
	print_inventory(inv_list);
}
struct inventory *new_node()
{	return (malloc(sizeof(struct inventory)));
}
void get_info(struct inventory *node)
{	printf("\tEnter Item Name : "); scanf("%s",node->item);
	printf("\tEnter Unit Price : "); scanf("%d",&node->unit_price);
	printf("\tEnter Quantity Rec'd : "); scanf("%d",&node->qty_rcvd);
	node->count = node->qty_rcvd;
	printf("\tEnter Date Rec'd(DD/MM) : ");
	scanf("%d/%d",&node->date_rcvd.day,&node->date_rcvd.month);
	printf("\tEnter Supplier's Name : "); scanf("%s",node->supplier);
}
void add_node(struct inventory *node, struct inventory **header)
{	node->next = *header; *header = node;
}
void print_inventory(struct inventory *header)
{	char price[10], date[10]; int i;
	printf("\n\n%-14s%11s%17s%17s\t%-14s\n","Item","Unit Price","Quantity Rec'd","Date","Supplier");
	for(i=0; i<78; i++)
	   printf("-");
	for( ; header!=NULL; header = header->next)
	{       sprintf(price,"Rs. %d",header->unit_price);
		sprintf(date,"%d/%d",header->date_rcvd.day, header->date_rcvd.month);
		printf("\n%-14s%11s%17d%17s\t%-14s\n",header->item,price,header->qty_rcvd,date,header->supplier);
	}
	delay(2000); getch();
}