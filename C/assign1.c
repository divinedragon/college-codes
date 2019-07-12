#include<stdio.h>
#include<alloc.h>
#define SIZE 3
#define STR_LEN 80
void sort_strings(char *chars[],char *strings[],int start,int end);
void print_strings(char *strings[]);

void main(void)
{  char *strings[SIZE];	//Stores the address of all the Strings
	char *chars[SIZE];	//Stores the address of a chars in strings
	int *str_len[SIZE];	//Stores the address of value for length of strings
	int i;					//Used to select string in the strings array

	//Accepting strings into strings array
	for(i=0; i<SIZE; i++)
	{  printf("\nEnter String #%d ==> ",i+1);
		*(strings+i) = (char *) malloc(sizeof(char)*STR_LEN);
		*(chars+i) = (char *) malloc(sizeof(char));
		gets(*(strings+i));
		*(chars + i) = *(strings+i);
	}

	//sort_strings(str_len,strings,chars);
	sort_strings(chars,strings,0,SIZE);
	print_strings(strings);

	//Free all the Memory that has been allocated
	free(chars);
	for(i=0; i!=SIZE; i++)
	{	free(*(strings+i));
		free(*(chars+i));
		free(*(str_len+i));
	}
	return;
}

/*void sort_strings(int *str_len[],char *strings[],char *chars[])
{  int i,j;
	int *t;
	char *temp;

	//Calculating and Storing the Length of the Strings
	for (i=0; i<SIZE; i++)
	{	for(j=0; *(*(strings+i)+j)!='\0'; j++);
		*(str_len+i) = (int *) malloc(sizeof(int));
		*(*(str_len+i)) = j;
	}

	for (i=0; i<SIZE-1; i++)
	{	for(j=i+1; j<SIZE; j++)
		{	if (*(*(str_len+i)) > *(*(str_len+j)))
			{  t = *(str_len+i);
				*(str_len+i) = *(str_len+j);
				*(str_len+j) = t;
				temp = *(strings+i);
				*(strings+i) = *(strings+j);
				*(strings+j) = temp;
			}
		}
	}

	//Make recursive call to sort the similar length strings
	for(i=0; i<SIZE-1;)
	{	for(j=i+1; j<SIZE; )
		{	if(*(*(str_len+i)) == *(*(str_len+j)))
				j++;
			else
				break;
		}

		if (i+1 != j)
		{  sort_string(chars,strings,i,j);
		}

		i=j;
		getch();
	}

	print_strings(strings);
}*/

void sort_strings(char *chars[],char *strings[],int start,int end)
{  int a,b,c;
	char *temp;
	printf("\n");
	for(a=0; a<end; a++)
	{	printf("\t%c",*(*(chars+a)));
	}

	for(a=start; a<end-1; a++)
	{  for(b=a+1; b<end; b++)
		{  //printf("\n\t\tChar ==> %c,     %c",*(*(chars+a)),*(*(chars+b)));
			if(*(*(chars+a)) > *(*(chars+b)))
			{	temp = *(chars+a);
				*(chars+a) = *(chars+b);
				*(chars+b) = temp;
				temp = *(strings+a);
				*(strings+a) = *(strings+b);
				*(strings+b) = temp;
			}
		}
	}

	//Make recursive call to sort the similar chars on next chars
	for(a=start; a<end-1;)
	{	for(b=a+1; b<end; )
		{	if(*(*(chars+a)) == *(*(chars+b)))
				b++;
			else
				break;
		}

		if (a+1 != b)
		{  printf("\nStart ==> %d, End ==> %d",a,b);
			for(c=a; c<b; c++)
			{ 	*(chars+c) = *(chars+c)+1;
			}

			sort_strings(chars,strings,a,b);
		}

		a=b;
	}
	//print_strings(strings);
}

void print_strings(char *strings[])
{  int i=0;
	printf("\nThe strings are as follows ==>");
	for(i=0; i<SIZE; i++)
	{	printf("\n\tString #%d ==> %s",i+1,*(strings+i));
	}
}