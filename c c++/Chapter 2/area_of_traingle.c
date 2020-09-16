/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */

//Problem statment:
/*
If lengths of three sides of a traingle are input through keyboard, write a program to find the area of the traingle.
*/
//Solution:

#include<stdio.h>
#include<math.h>

int main()
{
    /*Using Heron's formula we can calculate area of triangle with help of given sides.*/
    /*Create variables to store and output*/
    float s, a, b, c, area; //s-halp peremetr, sides a,b,c
    /*Take input sides from user*/
    printf("Please enter length of side a\n");
    scanf("%f", &a);
    printf("Please enter length of side b\n");
    scanf("%f", &b);
    printf("Please enter length of side c\n");
    scanf("%f", &c);
    /*Formula*/
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of given traingle is %f", area);
    return 0;
}