/*Solving problems from "Let Us C", Chapter 6,Functions & Pointers*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a function power(a,b), to calculate the value of a raised to b.
*/

//Solution:
#include<stdio.h>

int power(int a, int b);
int main(void)
{
    /*Create variables*/
    int a, b, pw;
    /*scan input*/
    printf("Please enter a number and it's exponent: \n");
    scanf("%d %d", &a, &b);
    /*Calculate power*/
    pw = power(a, b);
    printf("Power of %d raised to %d is %d", a, b, pw);
}

int power(int a, int b)
{
    int out=1;
    for (int i = 0; i < b;i++)
        out = out * a;

    return out;
}