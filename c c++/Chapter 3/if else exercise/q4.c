/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
According to the Gregorian calender, it was Monday on Date 01/01/01 . If any year is input through the keyboard, write a program to find out what is the day on 1st January of this year
*/
//Solution

#include<stdio.h>

int main()
{
    /*Create a variable to store year*/
    int yr, day,total_days;
    /*Take input*/
    printf("Please enter year:");
    scanf("%d", &yr);
    /*Formulae*/
    if (yr%4==0)
        total_days = yr + (yr / 4) - 2;
    else
        total_days = yr + (yr / 4) - 1;

    day = total_days % 7;
    printf("Day %d on 1st January %d", day, yr);
}
