/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */

//Problem statment:
/*
Write a program to receive value of an angle in degrees and check whether sum of squares of sine and cosine of this angle is 1.
*/
//Solution:


#include<stdio.h>
#include<math.h>

int main()
{
    /* Create variables to store degrees from user and print sum of squares of sin and cos*/
    float theta,rad, out;
    /* Scan values from user*/
    printf("Please enter values in degrees: \n");
    scanf("%f", &theta);
    /*Calculate theta to radians and cos and sine*/
    rad = theta * 180 / 3.14;
    out = pow(cosf(rad), 2) + pow(sinf(rad), 2);
    printf("Sum of squares of sin and cosine of given angle is %f", out);
    return 0;
}