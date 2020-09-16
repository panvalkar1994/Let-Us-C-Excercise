/*Solving problems from "Let Us C", Chapter 6,Functions & Pointers*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write afunction to calculate the factorial value of any integer entered through the keyboard.
*/

//Solution:
#include<stdio.h>

int factorial(int i);
int main(void)
{
    /*Create variables*/
    int i, n;
    /*User input*/
    printf("Please enter number of which factorial is to be calculated: \n");
    scanf("%d", &i);
    n = factorial(i);
    printf("factorial of %d is %d\n", i, n);
}

int factorial(int i)
{
    int fact=1;
    while(i>0)
    {
        fact = fact * i;
        i--;
    }
    return fact;
}