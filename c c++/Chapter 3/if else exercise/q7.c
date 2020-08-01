/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to check whether a traingle is valid or not, when the three angles of the triangle are entered through the keyboard.A traiangle is valid iff the sum of all angles is 180.
*/
//Solution
#include<stdio.h>

int main()
{
    /*Create variables to store angles of the traingle*/
    int a, b, c, sum; 
    /*Scan input*/
    printf("Please enter values of angles of the traingle.\n");
    scanf("%d %d %d", &a, &b, &c);
    /*Check valid traingle or not and show result*/
    sum = a + b + c;
    if (sum==180)
        printf("Given triangle is Valid.");
    else
        printf("Given triangles is not valid.");
    return 0;
}