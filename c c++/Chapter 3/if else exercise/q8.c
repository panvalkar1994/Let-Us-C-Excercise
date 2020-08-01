/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to find the absolute value of a number entered through keyboard.
*/
//Solution

#include<stdio.h>

int main()
{
    /*Create variable to store value entered through keyboard.*/
    int n;
    /*Scan input*/
    printf("Please enter a number to find it's absolute value.:\n");
    scanf("%d", &n);
    /*Calculate absolute value and show*/
    if (n<0)
    {
        n = n * (-1);
        printf("Absolute value of your number is %d", n);
    }
    else
        printf("Absolute value of your number is %d", n);
}