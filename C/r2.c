#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct ll
{
int data;
struct ll *next ;
}*ptr, *start, *ptr1;
void traverse();
void main()
{
//struct ll *ptr, *start, *ptr1;
start = NULL;
char wish ='y';

 clrscr();
//insertion in the back //
while(wish=='y')
{
ptr= (struct ll*)malloc(sizeof(struct ll));
printf("enter the data");
scanf("%d", &ptr->data);
if(start==NULL)
{
printf("in start" );
start = ptr;
ptr1=ptr;
ptr->next=NULL;
printf("start is %d", start->data);

}
else
{
printf("in first node");
ptr->next=start;
start=ptr;
}
fflush(stdin);

printf("do u want to continue");
scanf("%c", &wish);
}
traverse();

}
void traverse()
{
for (ptr1=start; ptr1!=NULL; ptr1=ptr1->next)
{

printf("%d--->",ptr1->data);
printf("%u\n",ptr1->next);
}
getch();
}

