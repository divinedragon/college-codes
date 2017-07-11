/* A simple mailing list example using an array of structures. */
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct addr
{	char name[30];
	char street[40];
	char city[20];			//Declaring Structure
	char state[3];
	unsigned long int zip;
} addr_list[MAX];

void init_list(void), enter(void);
void del(void), list(void);		//Declaring Functions
void load(void), save(void);
int menu_select(void), find_free(void);

int main(void)
{	char choice;
	init_list();
	for(;;)
	{   choice = menu_select();
	    switch (choice)
	    {   case 1: enter(); break;
		case 2: del(); break;
		case 3: list(); break;
		case 4: save(); break;
		case 5: load(); break;
		case 6: exit(0);
	    }
	}
}

/* INITIALIZE THE LIST. */
void init_list(void)
{       register int t;
	for(t=0; t<MAX; ++t) addr_list[t].name[0] = '\0';
}

/* GET A MENU SELECTION. */
int menu_select(void)
{       char s[80];
	int c;
	printf("1. Enter a Name\n");
	printf("2. Delete a Name\n");
	printf("3. List the File\n");
	printf("4. Save the File\n");
	printf("5. Load the File\n");
	printf("6. Quit\n");
	do
	{   printf("\nEnter Your Choice : ");
	    get(s);
	    c = atoi(s);
	} while (c<0 || c>6);
	return c;
}

/* INPUT ADDRESSED INTO THE LIST. */
void enter(void)
{	int slot;
	char s[80];
	slot = find_free();
	if (slot == -1)
	{   printf("\nList Full");
	    return;
	}
	printf("\nEnter Name : "); gets(addr_list[slot].name);
	printf("\nEnter Street : "); gets(addr_list[slot].street);
	printf("\nEnter City : "); gets(addr_list[slot].city);
	printf("Enter State : "); gets(addr_list[slot].state);
	printf("Enter Zip : "); gets(s);
	addr_list[slot].zip = strtoul(s,'\0',10);
}

/* FIND AN UNUSED STRUCTURE. */
int find_free(void)
{	register int t;
	for(t=0; addr_list[t].name[0] && t<MAX; ++t);

	if(t==MAX) return -1; /* NO SLOTS FREE */
	return t;
}

/* DELETE AN ADDRESS. */
void del(void)
{       register int slot;
	char s[80];
	printf("\nEnter Record #: "); gets(s);
	slot = atoi(s);
	if(slot>=0 && slot < MAX)
	   addr_list[slot].name[0] = '\0';
}

/* DISPLAY THE LIST ON THE SCREEN. */
void list(void)
{	register int t;
	for(t=0; t<MAX; ++t)
	{   if(addr_list[t].name[0])
	    {   printf("%s\n", addr_list[t].name);
		printf("%s\n", addr_list[t].street);
		printf("%s\n", addr_list[t].city);
		printf("%s\n", addr_list[t].state);
		printf("%lu\n\n", addr_list[t].zip);
	    }
	}
	printf("\n\n");
}

/* SAVE THE LIST. */
void save(void)
{	FILE *fp;
	register int i;
	fp=fopen("C:\\TC\\Mailist.txt","wb");
	if(!fp)
	{   printf("\nCANNOT OPEN FILE.\n");
	    return;
	}

	for(i=0; i<MAX; i++)
	   if(*addr_list[i].name)
	       if(fwrite(&addr_list[i], sizeof(struct addr), 1, fp) != 1)
		   printf("\nFILE WRITE ERROR.\n");

	fclose(fp);
}

/* LOAD THE FILE. */
void load(void)
{	FILE *fp;
	register int i;
	fp=fopen("C:\\TC\\Mailist.txt","wb");
	if(!fp)
	{   printf("\nCANNOT OPEN FILE.\n");
	    return;
	}
	init_list();
	for(i=0; i<MAX; i++)
	   if(fread(&addr_list[i], sizeof(struct addr), 1, fp) != 1)
	   {   if(feof(fp)) break;
	       printf("\nFILE READ ERROR.\n");
	   }
	fclose(fp);
}