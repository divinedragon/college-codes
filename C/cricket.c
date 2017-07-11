/* Including the Required Files for Proper Execution of Program. */
#include<stdio.h>	//Basic Input/Output Functions
#include<conio.h>	//Basic Functions for Console Writing
#include<stdlib.h>	//Standard Library Functions
#include<alloc.h>	//Memory Allocation Functions
#include<string.h>	//String Handling Functions
#define TARGET 0
/***********************************************************************
Defining the Prototype of Function being used.
1. int initial(void);
   Starts with the Displaying of Welcome screens and Similar other stuff.
   Authenticates the User.
   Sets up the Playing condition by allowing the user to choose their team
   and then Tossing Option.

2. void play_india(int mode);
   It is the Function for Manual Playing with Indian Team.
   Initially Setups the Double Link List and Enters the Values in it.

3. void play_aus(int mode);
   It is the Function for Manual Playing with the Australian Team.
   Initially Setups the Double Link List and Enters the Values in it.

4. void india_auto();
   It is the Function for Auto Playing with the Indian Team.
   Initially Setups the Double Link List and Enters the Values in it.

5. void aus_auto();
   It is the Function for Auto Playing with the Australian Team.
   Initially Setups the Double Link List and Enters the Values in it.

6. int display_team(struct team *start);
   Displays the Score Card for the Team.
   The Starting of the Team List is passed as the Argument.
   It Returns an integer value containing first two digits as the Total No.
   of players which are out and the last three as the Total No. of Runs
   scored by the Team.

7. void runteam(struct team *start);
   This Function stores the runs scored by individual players of the Team
   whose address is passed as argument to this function. This list is
   initialized from the last element of the list.

8. void team_bat(struct team *start, struct team *end);
   I dont remember why i created this function.

9. void playplayer(int runs, char name[20]);
   I dont remember why i created this function.
*************************************************************************/
int initial(void);
void play_india(int mode);
void play_aus(int mode);
void india_auto();
void aus_auto();
int display_team(struct team *start);
void runteam(struct team *start);
void team_bat(struct team *start, struct team *end);
void playplayer(int runs, char name[20]);

/* Defining the Structure of the Teams. */
struct team
{   int srno;			//Serial No. of the Player
    char pname[20];		//Player Name
    int runs;			//Runs Scored
    int status;			//Player Status - 1(OUT) and 0(NOTOUT).
    struct team *next;		//Address of the Next Player.
    struct team *previous;      //Address of the Previous Player.
};

/* THIS IS FIRST FUNCTION WHICH IS CALLED AS U ALL KNOW. */
void main(void)
{	int mode;
	clrscr();
	mode = initial();
	switch (mode)
	{	case 11: play_india(mode); break;
		case 12: aus_auto(); break;
		case 21: play_aus(mode); break;
		case 22: india_auto(); break;
	}
}

/* The Following Function setup the Platform for the GAME. */
int initial(void)
{       int i,uname,pass,t,m,condition=0;

	/* THIS PART DISPLAYS THE INITIAL LOADING SCREEN. */
	printf("\n\n\n\n\n\n\t\tPLEASE WAIT WHILE THE SOFTWARE IS LOADING...\n\n\t\t\t");
	for(i=1; i<10; i++)
	{   printf("###");
	    delay(500);
	}
	printf("\n\t\t\t    LOADING SUCCESSFUL.");
	printf("\n\n\n\t\t\tPress Any Key to Continue...");
	getch();
	clrscr();

	/* CHECKING THE AUTHENTICITY OF THE USER & PROCEED ACCORDINGLY. */
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
		getch();
		clrscr();
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\tPEPSI CUP");
		printf("\n\n\t\t\t   (INDIA vs AUSTRALIA)");
		delay(2000);
		clrscr();

		/* THIS LOOP ALLOWS TO CHOOSE THE TEAM. */
		do
		{   if(condition)
		    {   clrscr();
			printf("\nINVALID TEAM NO. ENTER CORRECT CODE FOR YOUR TEAM.\n");
		    }
		    /* ALLOW THE USER TO CHOOSE HIS TEAM. */
		    printf("\nPLEASE CHOOSE YOUR TEAM.");
		    printf("\n(1)\tINDIA\n(2)\tAUSTRALIA");
		    printf("\nEnter Your Choice : ");
		    scanf("%d",&t);
		    if((t>2) || (t<1))
			condition=1;
		    else
			condition = 0;
		} while(condition);

		/* THIS PART DOES THE TOSS FOR THE USER. */
		clrscr();
		printf("\nPress Any Key For Toss.");
		getch();
		printf("\nTossing...");
		delay(500);
		printf("\nTossed.");
		delay(200);
		printf("\nCONGRATULATION. YOU HAVE WON THE TOSS.\n");

		/* ALLOW THE USER TO CHOOSE BATTING / BOWLING. */
		do
		{   if(condition)
		    {	clrscr();
			printf("\nINVALID PREFERENCE PROVIDED.\n");
		    }
		    printf("\nPLEASE CHOOSE YOUR OPTION.");
		    printf("\n(1)\tBatting\n(2)\tBowling");
		    printf("\nEnter Your Choice : ");
		    scanf("%d",&m);
		    if((m>2) || (m<1))
			condition=1;
		    else
			condition = 0;
		} while(condition);
	}

	/* THIS PART GETS EXECUTED IF THE AUTHENTICATION FAILS.*/
	else
	{   printf("\nWRONG USER NAME OR PASSWORD. SOFTWARE IS EXITING...");
	    delay(2000);
	    printf("\nSOFTWARE EXITED.");
	    delay(1000);
	    exit(1);
	}
	return ((t*10)+m); // THIS DECIDES THE MODE IN WHICH THE USER IS PLAYING.
}
void play_india(int mode)
{	struct team *oldplayer, *newplayer, *startlist=NULL, *endlist=NULL;
	int i,sno;
	fflush(stdin);

	//LOOP FOR CREATING THE LINE UP FOR INDIAN TEAM.
	for(i=0; i<11; i++)
	{   newplayer = malloc(sizeof(struct team));  //New Player Allocation
	    if(startlist == NULL)     	    //Checking for the First Player.
	    {   startlist = newplayer;      //Get the Starting of the List.
		endlist = newplayer;        //Assign the Ending of the List.
		oldplayer = newplayer;      //Now, OldPlayer Targets the NewPlayer.
		newplayer->previous = NULL;
	    }
	    else
	    {   endlist = newplayer;             //Update the Ending of list.
		oldplayer->next = newplayer;     //Link the Next for OldPlayer
		newplayer->previous = oldplayer; //Link the Previous for NewPlayer.
		oldplayer = newplayer;           //Now, OldPlayer Targets the NewPlayer.
	   }
	   newplayer->srno=i;     //Copy the Corresponding Values
	   newplayer->runs = 0;
	   newplayer->status = 0;
	   newplayer->next = NULL;
	   switch (i)       //Assign the Appropriate Name.
	   {	case 0: stpcpy(newplayer->pname,"Vireder Sehwag"); break;
		case 1: stpcpy(newplayer->pname,"Sachin Tendulkar"); break;
		case 2: stpcpy(newplayer->pname,"Rahul Dravid"); break;
		case 3: stpcpy(newplayer->pname,"Yuvraj Singh"); break;
		case 4: stpcpy(newplayer->pname,"Mohd. Kaif"); break;
		case 5: stpcpy(newplayer->pname,"Suresh Raina"); break;
		case 6: stpcpy(newplayer->pname,"Mahender Dhoni"); break;
		case 7: stpcpy(newplayer->pname,"Irfan Pathan"); break;
		case 8: stpcpy(newplayer->pname,"Ajit Agarkar"); break;
		case 9: stpcpy(newplayer->pname,"Harbhajan Singh"); break;
		case 10:stpcpy(newplayer->pname,"S. Sreesanth"); break;
		}
	}
	team_bat(startlist, endlist);
}

void team_bat(struct team *start, struct team *end)
{   struct team *search;
    int sno,tout=0,truns,temp;
    char play='Y';
    display_team(start);
    runteam(end);
    if (TARGET)
    {  while(truns<=TARGET && tout<11)
       {   temp = display_team(start);
	   truns = temp%1000;
	   printf("\n\nChoose a Player : ");
	   scanf("%d",&sno);
	   for(search = start; search->srno != sno-1 && search != NULL; search = search->next);
	   if (search->srno == sno-1)
	   {   printf("%-2d\t%-20s",search->srno+1,search->pname);
	       if (!search->status)
	       {  printf("\tPLAY? (Y/N) :- ");
		  play=getch();
		  if (play == 'y' || play == 'Y')
		  {  search->status = 1;
		     tout++;
		     playplayer(search->runs, search->pname);
		  }
	       }
	       else
		  printf("\nThe Selected Player has already played.");
	   }
	   delay(2000);
       }
       temp = display_team(start);
       truns = temp%1000;
       printf("\nTHE WHOLE TEAM IS OUT. FINAL SCORE : ALL OUT FOR %d",truns);
       printf("\nAUSTRALIA NEEDS %d TO WIN THIS MATCH.",truns+1);
    }
    else
    {   while(tout<11)
	{   temp = display_team(start);
	    truns = temp%1000;
	    printf("\n\nChoose a Player : ");
	    scanf("%d",&sno);
	    for(search = start; search->srno != sno-1 && search != NULL; search = search->next);
	    //if (search->srno == sno-1)
	    {   printf("%-2d\t%-20s",search->srno+1,search->pname);
		if (!search->status)
		{  printf("\tPLAY? (Y/N) :- "); play=getch();
		   if (play == 'y' || play == 'Y')
		   {  search->status = 1;
		      playplayer(search->runs, search->pname);
		      tout++;
		   }
		}
		else
		   printf("\nThe Selected Player has already played.");
	    }
	    delay(1000);
	}
	temp = display_team(start);
	truns = temp%1000;
	printf("\nTHE WHOLE TEAM IS OUT. FINAL SCORE : ALL OUT FOR %d",truns);
	printf("\nAUSTRALIA NEEDS %d TO WIN THIS MATCH.",truns+1);
    }
}

int display_team(struct team *start)
{   	int i,truns=0,tout=1; clrscr();
	printf("SNo.\tPLAYER NAME\t\tRUNS\n");
	for(i=0; i<37; i++)
	   printf("-");
	printf("\n");
	for( ; start != NULL; start = start->next)
	{  printf("%-2d\t%-20s   ",start->srno+1,start->pname);
	   if(!start->status)
	     printf("   0\n");
	   else
	   {  printf("%4d\tOUT\n",start->runs);
	      truns=truns+start->runs;
	      tout++;
	   }
	}
	for(i=0; i<37; i++)
	   printf("-");
	printf("\n\t\t\t\t%d",truns);
	return (tout*1000)+truns;
}

void runteam(struct team *start)
{       for( ; start != NULL; start = start->previous)
	{	printf("%-2d\t%-20s\t%d\n",start->srno+1,start->pname,start->runs=random(100));
	}
}

void playplayer(int runs, char name[20])
{    	 int i,temp;
	 temp = runs;
	 printf("\nPlaying with %s\n",name);
	 while (temp)
	 {  i=random(7);
	    if (i>=temp)
	      i = temp;
	    temp = temp-i;
	    switch (i)
	    {  case 0: printf("%d...",i); delay(i*50); break;
	       case 1: printf("%d...",i); delay(i*50); break;
	       case 2: printf("%d...",i); delay(i*50); break;
	       case 3: printf("%d...",i); delay(i*50); break;
	       case 4: printf("%d...",i); delay(i*50); break;
	       case 5: printf("%d...",i); delay(i*50); break;
	       case 6: printf("%d...",i); delay(i*50); break;
	    }
	 }
	 printf("\nThe Player is OUT. %s scored %d",name,runs);
}

void india_auto()
{	struct team *oldplayer, *newplayer, *startlist=NULL, *endlist=NULL;
	int i,temp,truns;
	fflush(stdin);

	//The following loop Creates the Line Up for Indian Team
	for(i=0;i<11;i++)
	{   newplayer = malloc(sizeof(struct team));  //New Player Allocation
	   if(startlist == NULL)     //Checking for the First Player.
	   {   startlist = newplayer;  //Get the Starting of the List.
	       endlist = newplayer;    //Assign the Ending of the List.
	       oldplayer = newplayer;
	       newplayer->previous = NULL;
	   }
	   else
	   {   endlist = newplayer;    //Update the Ending of the list.
	       oldplayer->next = newplayer;  //Link the Next for OldPlayer
	       newplayer->previous = oldplayer; //Link the Previous for NewPlayer.
	       oldplayer = newplayer; //Now, OldPlayer Targets the NewPlayer.
	   }
	   newplayer->srno=i;     //Copy the Corresponding Values
	   newplayer->runs = 0;
	   newplayer->status = 0;
	   newplayer->next = NULL;
	   switch (i)       //Assign the Appropriate Name.
	   {	case 0: stpcpy(newplayer->pname,"Vireder Sehwag"); break;
		case 1: stpcpy(newplayer->pname,"Sachin Tendulkar"); break;
		case 2: stpcpy(newplayer->pname,"Rahul Dravid"); break;
		case 3: stpcpy(newplayer->pname,"Yuvraj Singh"); break;
		case 4: stpcpy(newplayer->pname,"Mohd. Kaif"); break;
		case 5: stpcpy(newplayer->pname,"Suresh Raina"); break;
		case 6: stpcpy(newplayer->pname,"Mahender Dhoni"); break;
		case 7: stpcpy(newplayer->pname,"Irfan Pathan"); break;
		case 8: stpcpy(newplayer->pname,"Ajit Agarkar"); break;
		case 9: stpcpy(newplayer->pname,"Harbhajan Singh"); break;
		case 10:stpcpy(newplayer->pname,"S. Sreesanth"); break;
	   }
	}
	display_team(startlist);
	runteam(endlist);
	printf("\nINDIAN TEAM IS PLAYING (AUTO).");
	for(oldplayer = startlist; oldplayer != NULL; )
	{   display_team(startlist);
	    printf("\n%-2d\t%-20s",oldplayer->srno+1,oldplayer->pname);
	    delay(500);
	    oldplayer->status = 1;
	    playplayer(oldplayer->runs, oldplayer->pname);
	    oldplayer = oldplayer->next;
	    printf("\n%u",oldplayer);
	}
	temp = display_team(startlist);
	truns = temp%1000;
	printf("\nTHE WHOLE TEAM IS OUT. FINAL SCORE : ALL OUT FOR %d",truns);
	printf("\nAUSTRALIA NEEDS %d TO WIN THIS MATCH.",truns+1);
}

void aus_auto()
{	struct team *oldplayer, *newplayer, *startlist=NULL, *endlist=NULL;
	int i,temp,truns;
	fflush(stdin);

	//The following loop Creates the Line Up for Indian Team
	for(i=0;i<11;i++)
	{   newplayer = malloc(sizeof(struct team));  //New Player Allocation
	    if(startlist == NULL)     //Checking for the First Player.
	    {   startlist = newplayer;  //Get the Starting of the List.
		endlist = newplayer;    //Assign the Ending of the List.
		oldplayer = newplayer;
		newplayer->previous = NULL;
	    }
	    else
	    {   endlist = newplayer;    //Update the Ending of the list.
		oldplayer->next = newplayer;  //Link the Next for OldPlayer
		newplayer->previous = oldplayer; //Link the Previous for NewPlayer.
		oldplayer = newplayer; //Now, OldPlayer Targets the NewPlayer.
	    }
	    newplayer->srno=i;     //Copy the Corresponding Values
	    newplayer->runs = 0;
	    newplayer->status = 0;
	    newplayer->next = NULL;
	    switch (i)       //Assign the Appropriate Name.
	    {	case 0: stpcpy(newplayer->pname,"Adam Gilchrist"); break;
		case 1: stpcpy(newplayer->pname,"Mathew Hayden"); break;
		case 2: stpcpy(newplayer->pname,"Ricky Ponting"); break;
		case 3: stpcpy(newplayer->pname,"Michael Hussey"); break;
		case 4: stpcpy(newplayer->pname,"Micheal Clarke"); break;
		case 5: stpcpy(newplayer->pname,"Andrew Symonds"); break;
		case 6: stpcpy(newplayer->pname,"Cameron White"); break;
		case 7: stpcpy(newplayer->pname,"Brett Lee"); break;
		case 8: stpcpy(newplayer->pname,"Nathan Bracken"); break;
		case 9: stpcpy(newplayer->pname,"Stuart Clarke"); break;
		case 10:stpcpy(newplayer->pname,"Glen McGrath"); break;
	    }
	}
	display_team(startlist);
	runteam(endlist);
	printf("\nINDIAN TEAM IS PLAYING (AUTO).");
	for(oldplayer = startlist; oldplayer != NULL; )
	{   display_team(startlist);
	    printf("\n%-2d\t%-20s",oldplayer->srno+1,oldplayer->pname);
	    delay(500);
	    oldplayer->status = 1;
	    playplayer(oldplayer->runs, oldplayer->pname);
	    oldplayer = oldplayer->next;
	    printf("\n%u",oldplayer);
	}
	temp=display_team(startlist);
	truns = temp%1000;
	printf("\nTHE WHOLE TEAM IS OUT. FINAL SCORE : ALL OUT FOR %d",truns);
	printf("\nAUSTRALIA NEEDS %d TO WIN THIS MATCH.",truns+1);
}

void play_aus(int mode)
{	struct team *oldplayer, *newplayer, *startlist=NULL, *endlist=NULL;
	int i,sno;
	fflush(stdin);

	//The following loop Creates the Line Up for Indian Team
	for(i=0;i<11;i++)
	{   newplayer = malloc(sizeof(struct team));  //New Player Allocation
	    if(startlist == NULL)     //Checking for the First Player.
	    {   startlist = newplayer;  //Get the Starting of the List.
		endlist = newplayer;    //Assign the Ending of the List.
		oldplayer = newplayer;
		newplayer->previous = NULL;
	    }
	    else
	    {   endlist = newplayer;    //Update the Ending of the list.
		oldplayer->next = newplayer;  //Link the Next for OldPlayer
		newplayer->previous = oldplayer; //Link the Previous for NewPlayer.
		oldplayer = newplayer; //Now, OldPlayer Targets the NewPlayer.
	    }
	    newplayer->srno=i;     //Copy the Corresponding Values
	    newplayer->runs = 0;
	    newplayer->status = 0;
	    newplayer->next = NULL;
	    switch (i)       //Assign the Appropriate Name.
	    {   case 0: stpcpy(newplayer->pname,"Adam Gilchrist"); break;
		case 1: stpcpy(newplayer->pname,"Mathew Hayden"); break;
		case 2: stpcpy(newplayer->pname,"Ricky Ponting"); break;
		case 3: stpcpy(newplayer->pname,"Michael Hussey"); break;
		case 4: stpcpy(newplayer->pname,"Micheal Clarke"); break;
		case 5: stpcpy(newplayer->pname,"Andrew Symonds"); break;
		case 6: stpcpy(newplayer->pname,"Cameron White"); break;
		case 7: stpcpy(newplayer->pname,"Brett Lee"); break;
		case 8: stpcpy(newplayer->pname,"Nathan Bracken"); break;
		case 9: stpcpy(newplayer->pname,"Stuart Clarke"); break;
		case 10:stpcpy(newplayer->pname,"Glen McGrath"); break;
	    }
	}
	team_bat(startlist, endlist);
}