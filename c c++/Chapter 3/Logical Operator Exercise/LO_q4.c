/*Solving problems from "Let Us C", Chapter 3,Logical Operator*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
A library charges a fine for every book returned late. For first 5 days the fine is 50 paise per day, for 6-10 days fine is 1 rupee per day and above 10 days fine is 5 rupees per day. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variables to store input days, fine*/
    int days;
    float fine;
    /*Scan input*/
    printf("Please enter days of late: \n");
    scanf("%d", &days);
    /*Calculate fine*/
    if (days>30)
        printf("Your Membership is cancelled!");
    else if (days>10)
    {
        fine = 5 * 0.5 + 5 * 1 + 5 * (days - 10);
        printf("Fine: %f", fine);
    }
    else if (days>5)
    {
        fine = 5 * 0.5 + 1 * (days - 5);
        printf("Fine: %f", fine);
    }
    else 
    {
        fine = days * 0.5;
        printf("Fine: %f", fine);
    }
    return 0;
}