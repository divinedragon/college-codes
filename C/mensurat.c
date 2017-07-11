/*This Program calculates area & volume of common 3D Figures. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
void main()
{
	float l=0,b=0,h=0,r=0,carea=0,tarea=0,vol=0; int choice=0;
	clrscr();
	printf("\n\t\tMATHEMATICS MENSURATION OF 3D FIGURES");
	printf("\nCHOOSE YOUR OPTION :- ");
	printf("\n\t1. CUBOID"); printf("\n\t2. CUBE");
	printf("\n\t3. CYLINDER"); printf("\n\t4. CONE");
	printf("\n\t5. SPHERE"); printf("\n\t6. HEMI-SPHERE");
	printf("\n\n\t\tEnter Your Choice : "); scanf("%d",&choice);
	switch (choice)
	{
	   case 1:
	      printf("\n\t\tEnter Length of Cuboid : "); scanf("%f",&l);
	      printf("\n\t\tEnter Breadth of Cuboid : "); scanf("%f",&b);
	      printf("\n\t\tEnter Height of Cuboid : "); scanf("%f",&h);
	      vol=l*b*h; tarea=2*((l*b)+(b*h)+(l*h)); carea=2*((l*b)+(b*h));
	      printf("\n\n\tVOLUME OF CUBOID : %0.2f cubic cm",vol);
	      printf("\n\tTOTAL SURFACE AREA OF CUBOID : %0.2f sq.cm",tarea);
	      printf("\n\tCURVED SURFACE AREA OF CUBOID : %0.2f sq.cm",carea); break;
	   case 2:
	      printf("\n\t\tEnter Length of Cube : "); scanf("%f",&l);
	      vol=l*l*l; tarea=6*l*l; carea=4*l*l;
	      printf("\n\n\tVOLUME OF CUBE : %0.2f cubic cm",vol);
	      printf("\n\tTOTAL SURFACE AREA OF CUBE : %0.2f sq.cm",tarea);
	      printf("\n\tCURVED SURFACE AREA OF CUBE : %0.2f sq.cm",carea); break;
	   case 3:
	      printf("\n\t\tEnter Radius of Cylinder : "); scanf("%f",&r);
	      printf("\n\t\tEnter Height of Cylinder : "); scanf("%f",&h);
	      vol=PI*r*r*h; tarea=2*PI*r*(r+h); carea=2*PI*r*h;
	      printf("\n\n\tVOLUME OF CYLINDER : %0.2f cubic cm",vol);
	      printf("\n\tTOTAL SURFACE AREA OF CYLINDER : %0.2f sq.cm",tarea);
	      printf("\n\tCURVED SURFACE AREA OF CYLINDER : %0.2f sq.cm",carea); break;
	   case 4:
	      printf("\n\t\tEnter Radius of Cone : "); scanf("%f",&r);
	      printf("\n\t\tEnter Height of Cone : "); scanf("%f",&h);
	      vol=(PI*r*r*h)/3; tarea=PI*r*(sqrt((r*r)+(h*h))+r); carea=PI*r*(sqrt((r*r)+(h*h)));
	      printf("\n\n\tVOLUME OF CONE : %0.2f cubic cm",vol);
	      printf("\n\tTOTAL SURFACE AREA OF CONE : %0.2f sq.cm",tarea);
	      printf("\n\tCURVED SURFACE AREA OF CONE : %0.2f sq.cm",carea); break;
	   case 5:
	      printf("\n\t\tEnter Radius of Sphere : "); scanf("%f",&r);
	      vol=(4*PI*r*r*r)/3; tarea=4*PI*r*r;
	      printf("\n\n\tVOLUME OF SPHERE : %0.2f cubic cm",vol);
	      printf("\n\tSURFACE AREA OF SPHERE : %0.2f sq.cm",tarea); break;
	   case 6:
	      printf("\n\t\tEnter Radius of Hemi-Sphere : "); scanf("%f",&r);
	      vol=(2*PI*r*r*r)/3; tarea=3*PI*r*r; carea=2*PI*r*r;
	      printf("\n\n\tVOLUME OF HEMI-SPHERE : %0.2f cubic cm",vol);
	      printf("\n\tTOTAL SURFACE AREA OF HEMI-SPHERE : %0.2f sq.cm",tarea);
	      printf("\n\tCURVED SURFACE AREA OF HEMI-SPHERE : %0.2f sq.cm",carea); break;
	   default: printf("\n\n\t\tINVALID CHOICE. PRESS ANY KEY TO ABORT...");
	}
	getch();
}