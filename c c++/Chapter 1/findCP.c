/*Solving Problems from "Let US C", chapter1*/
/*Author: Vaibhav Panvalkar */

// Problem Statement
/*
If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item.
*/


//Solution:

#include<stdio.h>

int main()
{
    /* Create variable to store selling price, profit and cost price per item.*/
    float sp15, profit15, sp, p, cp;
    /* Scan Selling price and gross profit*/
    printf("Please Enter the selling price of 15 items:\n");
    scanf("%f", &sp15);
    printf("Please Enter the profit for 15 items: \n");
    scanf("%f",&profit15);
    /*Calulate selling price, profit and cost price for 1 item*/
    sp = sp15 / 15;
    p = profit15 / 15;
    cp = sp - p;
    /*Print Result*/
    printf("Cost price of 1 item is %f", cp);
    return 0;
}