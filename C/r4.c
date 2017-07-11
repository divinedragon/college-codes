#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct ll
{
int data;
struct ll *next ;
}*ptr, *start, *ptr1;
void traverse();
int search();
void delete1();
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
//search();
delete1();
getch();

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
int search()
{
char flag= 't';
int x;
printf("enter elment to search");
scanf("%d",&x);
   for(ptr=ptr1=start; ptr1!= NULL;ptr=ptr1,ptr1=ptr1->next)
    {
     //search
	if(ptr1->data==x)
       {
	printf("found %d",x);
	  flag='f';
	  return 1;

	}

     }

	if (flag=='t')
	{
	printf("not found");
}
return 0;
}
void delete1()
{
int ret;
ret=search();
if(ret==1)
{
ptr->next = ptr1->next;
free(ptr1);
ptr1=ptr->next;
}
traverse();
}


