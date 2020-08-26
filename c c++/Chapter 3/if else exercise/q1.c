/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much.
*/
//Solution:

#include<stdio.h>

int main()
{
    /*Create variables to store selling price, cost price and profit/loss*/
    float sp, cp, p;
    /*Take input from user*/
    printf("Please enter selling price and cost price: \n");
    scanf("%f %f", &sp, &cp);
    /*Calculte profit-loss*/
    p = sp - cp;
    if (p>0)
        printf("The seller was profitable by Rs. %f.", p);
    else if(p<0)
        printf("The seller incurred loss of Rs. %f", p);
    else
        printf("No loss or profit");
    return 0;
}