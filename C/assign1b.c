#include<stdio.h>
#include<alloc.h>
#define SIZE 5
#define STR_LEN 80
void sort_strings(char *chars[],char *strings[],int start,int j);
void print_strings(char *strings[]);

int main(void)
{  char *strings[SIZE];	//Stores the address of all the Strings
	char *chars[SIZE];	//Stores the address of a chars in strings
	int i;					//Used to select string in the strings array

	//Accepting strings into strings array
	for(i=0; i<SIZE; i++)
	{  printf("\nEnter String #%d ==> ",i+1);
		*(strings+i) = (char *) malloc(sizeof(char)*STR_LEN);
		*(chars+i) = (char *) malloc(sizeof(char));
		gets(*(strings+i));
		*(chars + i) = *(strings+i);
	}

	sort_strings(chars,strings,0,SIZE);	//Sorting the Strings
	print_strings(strings);	//Displaying the Strings

	//Free all the Memory that has been allocated
	for(i=0; i!=SIZE; i++)
	{	free(*(strings+i));
		free(*(chars+i));
	}
	return 1;
}

void sort_strings(char *chars[],char *strings[],int i,int j)
{  int a,b,c;
	char *temp;
	/* //Uncomment the Multiline comment while debugging
	printf("\n");
	for(a=0; a<j; a++)
	{	printf("\t%c",*(*(chars+a)));
	}
	*/

	for(a=i; a<j-1; a++)
	{  for(b=a+1; b<j; b++)
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
	for(a=i; a<j-1;)
	{	for(b=a+1; b<j; )
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
}

void print_strings(char *strings[])
{  int i=0;
	printf("\nThe strings are as follows ==>");
	for(i=0; i<SIZE; i++)
	{	printf("\n\tString #%d ==> %s",i+1,*(strings+i));
	}
	return;
}