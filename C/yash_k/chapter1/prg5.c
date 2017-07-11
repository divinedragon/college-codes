/*
Yashwant Kanitkar - Let Us C
Chapter 1 - [G] - Write C Programs for the following

(e) The length and breadth of a rectangle are input. Also the radius of a
circle is input. WAP to calculate the area and perimeter of a rectangle.
Also calculate the area and circumference of the circle.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
	For Rectangle -
		Area = Length * Breadth
		Perimeter = 2 * (Length + Breadth)

	For Circle -
		Area = Pie(3.14) * radius * Radius
		Circumference = 2 * Pie(3.14) * Radius
*/
#include<stdio.h>
int main(void)
{	float length, breadth, radius;
	float rect_area,perimtr,circle_area, circumference;

	printf("\n\nEnter Length of the Rectangle ==> "); scanf("%f",&length);
	printf("\nEnter Breadth of the Rectangle ==> "); scanf("%f",&breadth);
	printf("\nEnter Radius of Circle ==> "); scanf("%f",&radius);

	rect_area = length * breadth;
	perimtr = 2 * (length + breadth);
	circle_area = (float) 22/7 * radius * radius;
	circumference = 2 * (float) 22/7 * radius;

	printf("\n\nArea of the Rectangle ==> %.3f sq. units",rect_area);
	printf("\nPerimeter of the Rectangle ==> %.3f units",perimtr);
	printf("\nArea of the Circle ==> %.3f sq. units",circle_area);
	printf("\nCircumference of the Circle ==> %.3f units",circumference);

	return 1;
}