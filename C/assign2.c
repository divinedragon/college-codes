#include<stdio.h>
#include<alloc.h>
#define SIZE 3
#define STR_LEN 80
int main(void)
{  char *strings[SIZE];//Stores the address of all the Strings
	char *srch_str = (char *) malloc(sizeof(char)*STR_LEN);//String which is to be searched
	int flag[SIZE];				//Stores the no. of times the srch_str
										//is found in the selected string
	int i;	//Used to select string in the strings array
	int j;	//Used to traverse through the characters of a particular string
	int k;	//Used to traverse through the characters of srch_str

	//Initializing the flag[] array and strings[] array
	for(i=0; i<SIZE; i++)
	{	*(flag+i) = 0;
		printf("\nEnter String #%d ==> ", i+1);
		*(strings+i) = (char *) malloc(sizeof(char)*STR_LEN);
		gets(*(strings+i));
	}

	//Accepting the Search String
	printf("\nEnter the Search String ==> ");
	gets(srch_str);

	//Searching for srch_str in the accepted strings in strings[]
	for(i=0; i<SIZE; i++)
	{	for(j=0; *(*(strings+i)+j)!='\0'; )
		{  k=0;	//This counter for srch_str is set to default position
			if (*(*(strings+i)+j) == *(srch_str+k))
			{  for(k=0; *(srch_str+k)!='\0'; k++)
				{  if (*(*(strings+i)+j) != *(srch_str+k))
					{	break;
					}
					j++;
				}

				if (*(srch_str+k) == '\0')
				{  *(flag+i) = *(flag+i) + 1;
				}
			}
			else
				j++;
		}
	}

	//Displaying the output
	for(i=0; i<SIZE; i++)
	{  if (*(flag+i))
			printf("\n\"%s\" occurs in \"%s\" for %d times",srch_str,*(strings+i),*(flag+i));
		else
			printf("\n\"%s\" does not occur in \"%s\"",srch_str,*(strings+i));
	}

	//Free all the Memory that has been allocated
	free(srch_str);
	for(i=0; i!=SIZE; i++)
	{	free(*(strings+i));
	}
	return 1;
}