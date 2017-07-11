/***********************************************************
Program: MATRIX.C - MCA Lab Assignment - 3.15
Author: Deepak Shakya
Date: 27-09-2009
Description: Program that does following operation on two matrices
			 1. Add two matrices
			 2. Subtract two matrices
			 3. Multiply two matrices
			 We are taking here square matrices.
***********************************************************/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 3

void add_matrices(int *matrix1, int *matrix2, int *result)
{
	int i,j;
	int p; // we are using this for pointer increment

	for(i=0,p=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			*(result+p) = (*(matrix1+p)) + (*(matrix2+p));
			p++;
		}
	}
}

void subtract_matrices(int *matrix1, int *matrix2, int *result)
{
	int i,j;
	int p;

	for(i=0,p=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			*(result+p) = *(matrix1+p) - *(matrix2+p);
			p++;
		}
	}
}

void multiply_matrices(int *matrix1, int *matrix2, int *result)
{
	int i,j,k;
	int sum;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			sum = 0;
			for(k=0; k<SIZE; k++)
			{
				sum = sum + ((*(matrix1+(SIZE*i)+k) * (*(matrix2+(SIZE*k)+j))));
			}
			*(result+(SIZE*i)+j) = sum;
		}
	}
}

void display_matrix(int *matrix)
{
	int i,j;
	int p;	// we are using this for pointer increment

	for(i=0,p=0; i<SIZE; i++)
	{
		printf("\n");
		for(j=0; j<SIZE; j++)
		{
			printf("%3d",*(matrix+p));
			p++;
		}
	}
}

void initialize_matrix(int *matrix)
{
	int i,j;
	int p;	// we are using this for pointer increment

	for(i=0,p=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			*(matrix+p) = random(5);
			p++;
		}
	}

}

int main(void)
{
	int choice;

	int matrix1[SIZE][SIZE];
	int matrix2[SIZE][SIZE];
	int result[SIZE][SIZE];

	initialize_matrix(&matrix1[0][0]);
	initialize_matrix(&matrix2[0][0]);

	do
	{
		clrscr();
		printf("\n\t\t\tMATRIX OPERATION");
		printf("\nMatrix 1 ==> "); display_matrix(&matrix1[0][0]);
		printf("\nMatrix 2 ==> "); display_matrix(&matrix2[0][0]);

		printf("\n\nAllowed Operations: ");
		printf("\n\t1. Add Matrices");
		printf("\n\t2. Subtract Matrices");
		printf("\n\t3. Multiply Matrices");
		printf("\n\t4. Exit");

		printf("\n\nEnter Your Choice ==> "); scanf("%d",&choice);

		// Process Choice
		switch (choice)
		{
			case 1:
				add_matrices(&matrix1[0][0],&matrix2[0][0],&result[0][0]);
				printf("\nResultant Matrix after Addition ==> ");
				display_matrix(&result[0][0]);
				printf("\nPress any key to return to menu..."); getch();
				break;
			case 2:
				subtract_matrices(&matrix1[0][0],&matrix2[0][0],&result[0][0]);
				printf("\nResultant Matrix after Subtraction ==> ");
				display_matrix(&result[0][0]);
				printf("\nPress any key to return to menu..."); getch();
				break;
			case 3:
				multiply_matrices(&matrix1[0][0],&matrix2[0][0],&result[0][0]);
				printf("\nResultant Matrix after Multiplication ==> ");
				display_matrix(&result[0][0]);
				printf("\nPress any key to return to menu..."); getch();
				break;
			case 4:
				printf("\nTHANK YOU FOR USING THIS PROGRAM");
				break;
			default:
				printf("\nINVALID CHOICE. PLEASE TRY AGAIN...");
				getch();
		}
	}while(choice!=4);

	return 1;
}