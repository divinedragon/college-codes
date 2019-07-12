/*
 *      1b.c
 *      
 *      Copyright 2009 dragon <justdpk@gmail.com>
 *      
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *      
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *      
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 *      
 *      Date: 27.09.2009 23:25:43
 * 
 *      Question:
 *          Write a program in C that prompts the user with the following lines:
 *          (a) Add two integers
 *          (b) Compare two integers for the larger
 *          (c) Test an integer for odd or even
 *          (d) Quit
 */


#include "stdio.h"
#include "curses.h"

int main(void)
{
    char choice;    // Storing the user choice from the main menu

    do
    {
        // Print the menu
        printf("\n\t\tMAIN MENU");
        printf("\n(a) Add two integers");
        printf("\n(b) Compare two integers for the larger");
        printf("\n(c) Test an integer for odd or even");
        printf("\n(d) Quit");

        // Prompt the user to provide his choice
        printf("\n\nYour choice ==> "); choice=getch();

        // Perform action based on the choice
        switch (choice)
        {
            case 'a':
                // Input two integers and perform addition

                {
                    int num1, num2;

                    printf("\nEnter 1st Number ==> "); scanf("%d",&num1);
                    printf("\nEnter 2nd Number ==> "); scanf("%d",&num2);
                    printf("\n%d + %d = %d",num1,num2,(num1+num2));
                }
                break;
            case 'b':
                // Input two integers and perform comparison

                {
                    int num1, num2;

                    printf("\nEnter 1st Number ==> "); scanf("%d",&num1);
                    printf("\nEnter 2nd Number ==> "); scanf("%d",&num2);
                    
                    if(num1 > num2)
                    {
                        printf("\n%d is greater than %d",num1,num2);
                    }
                    else if(num1 < num2)
                    {
                        printf("\n%d is smaller than %d",num1,num2);
                    }
                    else
                    {
                        printf("\nBoth %d and %d are same",num1,num2);
                    }
                }
                break;
            case 'c':
                // Input an integer and test for even or odd
                
                {
                    int num;

                    printf("\nEnter a Number ==> "); scanf("%d",&num);

                    if(0 == num%2)
                    {
                        printf("\n%d is Even Number",num);
                    }
                    else
                    {
                        printf("\n%d is Odd Number",num);
                    }
                }
                break;
            case 'd':
                // Exit condition. Terminate gracefully
                printf("\nThank you for using this program.");
                break;
            default:
                // All invalid choices come here
                printf("\nINVALID CHOICE. Please try again...");
                getchar();
        }
    }while((choice != 'd') && (choice != 'D'));

    return 0;
}
