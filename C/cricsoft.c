#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
#include<string.h>
int initial(void);
void play_india(int mode);
void display_india(struct team *start);
//void india_bowl(void);
//void aus_bat(void);
//void aus_bowl(void);
struct team
{       int srno;		//Serial No. of the Player
	char pname[20];		//Player Name
	int runs;		//Runs Scored
	int status;		//Player Status - 1(OUT) and 0(NOTOUT).
	struct team *next;	//Address of the Next Player.
};
void main(void)
{	int mode;
	clrscr();
	mode=initial();
	//switch (mode/10)
       //{	case 1:
	play_india(mode);// break;
		//case 2: play_aus(mode); break;
	//}
}
/* The Following Function setup the Platform for the GAME. */
int initial(void)
{       int i,uname,pass,t,m,condition=0;
	/* This Part is the Initial Loading Screen. */
	printf("\n\n\n\n\n\n\t\tPLEASE WAIT WHILE THE SOFTWARE IS LOADING...\n\n\t\t\t");
	for(i=1; i<10; i++)
	{       printf("###");
		delay(500);
	}
	printf("\n\t\t\t    LOADING SUCCESSFUL.");
	printf("\n\n\n\t\t\tPress Any Key to Continue...");
	getch(); clrscr();

	/* This Part checks the Authenticity of the User & proceeds accordingly.*/
	printf("USER NAME : "); scanf("%d",&uname);
	printf("PASSWORD : "); scanf("%d",&pass);
	if((uname==1) && (pass==1))
	{	printf("\nLOGIN SUCCESSFUL. PLEASE WAIT...");
		delay(2000);
		clrscr();
		printf("\n\n\n\n\t\t\t\t WELCOME");
		printf("\n\n\n\t\t\t\t    TO");
		printf("\n\n\n\t\t\t     CRICKET SOFTWARE");
		printf("\n\n\n\n\n\n\n\t\t\tSoftware By:- DEEPAK SHAKYA");
		printf("\n\n\n\n\n\nPress Any Key to Continue...");
		getch(); clrscr();
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\tPEPSI CUP");
		printf("\n\n\t\t\t   (INDIA vs AUSTRALIA)"); delay(2000); clrscr();
		do
		{       if(condition)
			{	clrscr();
				printf("\nINVALID TEAM NO. ENTER CORRECT CODE FOR YOUR TEAM.\n");
			}
			/* This Part Allows the Valid User to Choose his Team. */
			printf("\nPLEASE CHOOSE YOUR TEAM.");
			printf("\n(1)\tINDIA\n(2)\tAUSTRALIA");
			printf("\nEnter Your Choice : "); scanf("%d",&t);
			if((t>2) || (t<1))
				condition=1;
			else
				condition = 0;
		} while(condition);
		/* This Part does the TOSS for the User. */
		clrscr(); printf("\nPress Any Key For Toss."); getch();
		printf("\nTossing..."); delay(500);
		printf("\nTossed."); delay(200);
		printf("\nCONGRATULATION. YOU HAVE WON THE TOSS.\n");
		do
		{       if(condition)
			{	clrscr();
				printf("\nINVALID PREFERENCE PROVIDED.\n");
			}
			printf("\nPLEASE CHOOSE YOUR OPTION.");
			printf("\n(1)\tBatting\n(2)\tBowling");
			printf("\nEnter Your Choice : "); scanf("%d",&m);
			if((m>2) || (m<1))
				condition=1;
			else
				condition = 0;
		} while(condition);
	}
	/* This Part is executed if User Authentication Fails.*/
	else
	{	printf("\nWRONG USER NAME OR PASSWORD. SOFTWARE IS EXITING...");
		delay(2000);
		printf("\nSOFTWARE EXITED.");
		delay(1000);
		exit(1);
	}
	return ((t*10)+m);
}
void play_india(int mode)
{	struct team *oldplayer, *newplayer, *startlist=NULL; int i,sno;
	fflush(stdin);
	for(i=0;i<11;i++)
	{   newplayer = malloc(sizeof(struct team));
	    if(startlist == NULL)
	    {   startlist = newplayer;
		oldplayer = newplayer;
	    }
	    else
	    {   oldplayer->next = newplayer;
		oldplayer = newplayer;
	    }
	    newplayer->srno=i;
	    newplayer->runs = 0;
	    newplayer->status = 0;
	    newplayer->next = NULL;
	    switch (i)
	    {	case 0: stpcpy(newplayer->pname,"Sachin Tendulkar"); break;
		case 1: stpcpy(newplayer->pname,"Virender Sehwag"); break;
		case 2: stpcpy(newplayer->pname,"Rahul Dravid"); break;
		case 3: stpcpy(newplayer->pname,"Yuvraj Singh"); break;
		case 4: stpcpy(newplayer->pname,"Mohd. Kaif"); break;
		case 5: stpcpy(newplayer->pname,"Suresh Raina"); break;
		case 6: stpcpy(newplayer->pname,"Mahender Dhoni"); break;
		case 7: stpcpy(newplayer->pname,"Irfan Pathan"); break;
		case 8: stpcpy(newplayer->pname,"Ajit Agarkar"); break;
		case 9: stpcpy(newplayer->pname,"Harbhajan Singh"); break;
		case 10:stpcpy(newplayer->pname,"S. Srisanth"); break;
	    }
	}
	do
	{   display_india(startlist);
	    printf("\n\nEnter SNo. for the Player : "); scanf("%d",&sno);
	}while(sno<1 || sno>11);
}
void display_india(struct team *start)
{       int i;clrscr();
	printf("SNo.\tPLAYER NAME\t\tRUNS\n");
	for(i=0; i<37; i++)
	   printf("-");
	printf("\n");
	for( ; start != NULL; start = start->next)
	{	printf("%-2d\t%-20s\t%d\n",start->srno+1,start->pname,start->runs);
	}
}
//void india_bat()
//{
//} */