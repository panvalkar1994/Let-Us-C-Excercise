/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
*/
//Solution

#include<stdio.h>

int main()
{
    /*Create a variable to store year*/
    int yr;
    /*Take input from user*/
    printf("Please enter the year: \n");
    scanf("%d", &yr);
    /*Output the result*/
    if (yr%4==0)
        printf("The year %d is Leap year", yr);
    else
        printf("The year %d is not a Leap year", yr);
    return 0;
}