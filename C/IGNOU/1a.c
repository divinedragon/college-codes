/*
 *      1a.c
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
 *      Question: Write a simple program to find out how many of the numbers from 1 to 10 is greater than 4.
 */


#include "stdio.h"

int main(void)
{
    int count=0;    // Counts the numbers greater than 4 in range 1 to 10
    int i;

    for(i=1; i<=10; i++)
    {
        if(i > 4)
        {
            count++;    // Number greater than 4. Increment count
        }
    }

    printf("\nNumbers found to be greater than 4 in range 1 to 10 ==> %d",count);
    return 0;
}
