/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create a variable to store input*/
    int n;
    /*Take input from keyboard*/
    printf("Please enter a number: \n");
    scanf("%d", &n);
    if (n%2==0)
        printf("%d is an Even number.", n);
    else
        printf("%d is an Odd number", n);
    return 0;
}