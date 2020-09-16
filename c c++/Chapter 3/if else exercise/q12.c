/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Given a point (x,y), write a program to find out if it lies on the x-axis, y-axis or on the origin.
*/
//Solution
#include<stdio.h>

int main()
{
    /*Create variables to store input point*/
    float x, y;
    /*Scan input*/
    printf("Please enter co-oridnates of point(x,y)\n");
    scanf("%f %f", &x, &y);
    /*Check where the point located*/
    if (x==0 && y==0)
        printf("The point lies on Origin");
    else if (y==0)
        printf("The point is on x-axis");
    else if (x==0)
        printf("The point is on y-axis");
    else
        printf("The point is not on axis or origin.");
    return 0;
}