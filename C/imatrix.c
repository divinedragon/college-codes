/* THIS PROGRAM CALCULATES THE INVERSE OF A MATRIX. */
/* THIS PROGRAM IS COMPLETED. */
/* COMPLETED ON - 27-08-2007 */
/* INVERSE IS BEING CALCULATE USING GAUSS-JORDON METHOD.
	THIS METHOD USED ROW TRANSFORMATION TECHNIQUE TO FIND THE INVERSE */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 3
void main(void)
{  float data[MAX][MAX]={{3.0,-3.0,4.0},{2.0,-3.0,4.0},{0.0,-1.0,1.0}};		//Normal Matrix
	float inverse[MAX][MAX];	//Inverse Matrix
	float value;
	int i,j,k;

	clrscr();

	/* Let us first Initialize the Inverse Matrix to Identity Matrix */
	for(i=0; i<MAX; i++)
	{  for(j=0; j<MAX; j++)
		{	if (i==j)
				inverse[i][j] = 1.0;
			else
				inverse[i][j] = 0.0;
		}
	}

	/* Populating the Matrix with Initial Values */
	for(i=0; i<MAX; i++)
	{  for(j=0; j<MAX; j++)
		{  data[i][j] = random(10.0);
		}
	}

	/* Calculating Inverse using Gauss-Jordan Method */
	for(i=0; i<MAX; i++)
	{  value = data[i][i];
		//printf("\ndata[%d][%d] ==> %d",i,i,value);

		/* Dividing the Row with the Value at the (i,i)th position. */
		for(j=0; j<MAX; j++)
		{ 	//printf("\ndata[%d][%d] ==> %d",i,j,data[i][j]);
			if (value!=0)
			{	data[i][j] = data[i][j]/value;
				inverse[i][j] = inverse[i][j]/value;
			}
		}

		/* Looping through the Rows for Row Transformation */
		for(j=0; j<MAX; j++)
		{  value = data[j][i];	//Value with which the row is subtracted

			if(i!=j)
			{  for(k=0; k<MAX; k++)
				{  /* Doing the Actual Subtraction */
					data[j][k] = data[j][k] - (value*data[i][k]);
					inverse[j][k] = inverse[j][k] - (value*inverse[i][k]);
				}
			}
		}

		/* Printing Results after each Transformation */
		printf("\n\nAfter %dth Transformation, ",i+1);
		for(j=0; j<MAX; j++)
		{   printf("\n");
			 for(k=0; k<MAX; k++)
			 {   printf("\t%0.2f",data[j][k]);
			 }
			 printf("\t");
			 for(k=0; k<MAX; k++)
			 {   printf("\t%0.2f",inverse[j][k]);
			 }
		}
	}

	/* Printing the Contents of the Arrays. */
	printf("\n\nFinal Output,");
	for(i=0; i<MAX; i++)
	{   printf("\n");
		 for(j=0; j<MAX; j++)
		 {   printf("\t%0.2f",data[i][j]);
		 }
		 printf("\t");
		 for(j=0; j<MAX; j++)
		 {   printf("\t%0.2f",inverse[i][j]);
		 }
	}
}