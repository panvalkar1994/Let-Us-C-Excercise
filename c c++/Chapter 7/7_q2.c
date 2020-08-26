/*Solving problems from "Let Us C", Chapter 7,Data Types Revisited*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
What will be the output of the following program
*/
#include<stdio.h>
int main()
{
    float a = 13.5;
    double b = 13.5;
    printf("%f %lf\n", a, b);
    return 0;
}

//Expected output
/*
a and b will be printed on screen but will have different precision.
*/