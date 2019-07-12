#include<stdio.h>
#include<alloc.h>
#define STR_LEN 80
void main(void)
{  char *str1 = (char *) malloc(sizeof(char) * STR_LEN);
	char *str2 = (char *) malloc(sizeof(char) * STR_LEN);
	int flag;	//Used to determine the result.
					//flag = 1, str1 is greater than str2
					//flag = 0, str1 and str2 are same
					//flag = -1, str1 is smaller than str1
	int i=0;

	//Accept String 1
	printf("\nEnter String #1 ==> ");
	gets(str1);

	//Accept String 2
	printf("\nEnter String #2 ==> ");
	gets(str2);

	flag = 0;	//Initial assumption, both strings are same

	//Check for the greater string among the two accepted strings
	while((*(str1+i) != '\0') || (*(str2+i) != '\0'))
	{	if (*(str1+i) > *(str2+i))
		{	flag = 1;	//str1 is greater than str2
			break;
		}
		else if(*(str1+i) < *(str2+i))
		{	flag = -1;
			break;
		}
		else
			i++;
	}

	//Display result based on the value of the flag
	switch (flag)
	{	case 1: printf("\nString ==> %s is greater",str1); break;
		case 0: printf("\nStrings, %s and %s are same",str1, str2); break;
		case -1: printf("\nString ==> %s is greater",str2); break;
	}

	//Free the allocated memory
	free(str1);
	free(str2);

	return;
}