/*Solving problems from "Let Us C", Chapter 4,While loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to find the factorial value of any number entered through the keyboard.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variable to store number and its factorial*/
    int n, fact_n = 1;
    /*Scan input*/
    printf("Enter number to find factorial: \n");
    scanf("%d", &n);
    /*Calculate factorial*/
    while (n>0)
    {
        fact_n = fact_n * n;
        n--; 
    }
    if (fact_n==0)
        fact_n = 1;
    printf("Factorial of %d is %d", n, fact_n);
    return 0;
}