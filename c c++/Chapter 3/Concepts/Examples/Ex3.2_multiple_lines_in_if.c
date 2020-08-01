/*Eamples from "Let US C", chapter 3*/
/*Author: Vaibhav Panvalkar */
/*
In this example I will explore how to add multiple lines in if code block.
*/

//Problem statment:
/*
The current year and the year of joining to the organisation is entered through keyboard. If the number of years for which the employee is serving the organisation is more than or equal to 3, then bonus of Rs. 25000 is given to the employee. If the years of service is less than 3 then the program should do nothing.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variables to take in year of joining and current year and years of service*/
    int cy, jy, yos, bonus;//cy-current year, jy- joining year, yos-years of service
    /*Take input from user*/
    printf("Please enter current year\n");
    scanf("%d",&cy);
    printf("Please enter year of joining of the employee:\n");
    scanf("%d", &jy);
    /*Calculate years of service*/
    yos = cy - jy;
    /*Condition for bonus*/
    if (yos>=3)
    {
        bonus = 25000;
        printf("Bonus=%d", bonus);
    }

    return 0;
}