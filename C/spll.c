#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define LENGTH 15
void main()
{       int i;
	struct list
	{	int content;
		struct list *next;
	}*start=NULL,*end=NULL,*node=NULL;
	clrscr();
	for(i=0; i<LENGTH; i++)
	{	node = malloc(sizeof(struct list));
		node->next = NULL;
		if(start==NULL)
		{	start = node;
			end = node;
		}
		else
		{	end->next = node;
			end = node;
		}
		node->content = i;
		//printf("\n%d",node->content);
	}
	for(node=start; node; node=node->next)
	{	//printf("\n%d",node->content);
	}
	for(node=start; node; node=node->next)
	{	if (node->next)
		{	node->content = node->content + node->next->content + node->next->next->content + node->next->next->next->content;
			printf("\n%d",node->content);
		}
	}
	getch();
}
