/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */

//Problem statment:
/*
If a five digit number is input through the keyboard, write a program to print a new number by adding one to each  of its digits. For example 12391 should be out as 23502.
*/

//Solution:

#include<stdio.h>

int main()
{
    /* Create variables to store input and output */
    int num, out;
    /*scan inputs*/
    printf("Please enter a 5-digit number: \n");
    scanf("%d", &num);
    /*Formula*/
    out = num + 11111;
    /*Print Result*/
    printf("Reformed numbers: %d", out);
    return 0;
}