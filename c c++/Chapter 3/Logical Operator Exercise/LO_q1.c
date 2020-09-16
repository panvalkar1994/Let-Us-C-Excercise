/*Solving problems from "Let Us C", Chapter 3,Logical Operator*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and ||.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variable to store year*/
    int yr;
    /*Scan input*/
    printf("Please enter year you want to check: \n");
    scanf("%d", &yr);
    /*Check for Leap year*/
    if (yr%4==0)
        printf("Year %d is a Leap year.", yr);
    else
        printf("Year %d is not Leap year.");
    return 0;
}