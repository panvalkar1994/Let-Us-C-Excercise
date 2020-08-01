/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Given three points (x1,y1),(x2,y2) and (x3,y3), write a program to check if all three points are colinear.
*/
//Solution
#include<stdio.h>

int main()
{
    /*Create variables to store points*/
    float x1, x2, x3, y1, y2, y3;
    /*Scan input*/
    printf("Please enter values of x1, x2, x3, y1, y2, y3 \n");
    scanf("%f %f %f %f %f %f", &x1, &x2, &x3, &y1, &y2, &y3);
    /*Check colinearity*/
    /* If three points are colinear, then the line formed by any two will pass through the third.*/
    /* (y3-y2)/(x3-x2)==(y3-y1)/(x3-x1) */
    if ((y3-y1)/(x3-x1)==(y2-y1)/(x2-x1))
        printf("All are colinear.");
    else
        printf("All are non colinear.");
    return 0;
}