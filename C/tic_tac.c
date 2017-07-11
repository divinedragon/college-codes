/* A SIMPLE TIC TAC TOE GAME. */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char matrix[3][3];	/* Tic Tac Toe Matrix. */

char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);

int main(void)
{	char done;

	printf("\nTHIS IS THE GAME OF TIC TAC TOE (3x3).\n");
	printf("You will be playing against the computer.\n");

	done = ' ';
	init_matrix();

	do
	{   clrscr();
	    disp_matrix();
	    get_player_move();
	    done = check();		/* Check for Winner */
	    if(done!=' ') break;    	/* Winner */
	    get_computer_move();
	    done = check();             /* Check for Winner */
	} while(done == ' ');

	if(done == 'X') printf("YOU WON !\n");
	else printf("I WON !!!!\n");
	disp_matrix();	getch();	/* Show final positions */

	return 0;
}
/* Initialize the Matrix. */
void init_matrix(void)
{	int i,j;

	for(i=0; i<3; i++)
	    for(j=0; j<3; j++)
		matrix[i][j] = ' ';
}
/* Get Player Move */
void get_player_move(void)
{	int x,y;

	printf("Enter X,Y coordinates for your move : ");
	scanf("%d%*c%d", &x, &y);
	x--; y--;

	if(matrix[x][y]!= ' ')
	{   printf("Invalid Move. Try Again.\n");
	    get_player_move();
	}
	else matrix[x][y] = 'X';
}
/* Get a Move from the computer. */
void get_computer_move(void)
{       int i,j;
	do
	{   i = random(3);
	    j = random(3);
	    if(matrix[i][j] == ' ') break;
	} while(matrix[i][j] != ' ');

	if(i*j == 9)
	{   printf("DRAW\n");
	    exit(0);
	}
	else  matrix[i][j] = 'O';
}
/* Display the Matrix. */
void disp_matrix(void)
{	int t;

	for(t=0; t<3; t++)
	{   printf(" %c | %c | %c ", matrix[t][0], matrix[t][1], matrix[t][2]);
	    if(t != 2) printf("\n---|---|---\n");
	}
	printf("\n");
}
/* See if there is a winner. */
char check(void)
{	int i;

	for(i=0; i<3; i++)			/* CHECK ROWS */
	    if(matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2])
		return matrix[i][0];

	for(i=0; i<3; i++)			/* CHECK ROWS */
	    if(matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i])
		return matrix[0][i];

	/* CHECK DIAGONALS */
	if(matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
	    return matrix[0][0];
	if(matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
	    return matrix[0][2];

	return ' ';
}