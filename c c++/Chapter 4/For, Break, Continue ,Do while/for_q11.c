/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
The natural logarithm can be approximated by the following series.
    (x-1)/x + 1/2((x-1)/x)^2 + 1/2((x-1)/x)^3...
If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
*/

//Solution:
#include<stdio.h>
#include<math.h>

int main(void)
{
    /*Create variables*/
    float x, lnx, x0;

    /*take input*/
    printf("please enter value of x: \n");
    scanf("%f", &x);

    /*Calculate natural log*/
    x0 = (x - 1) / x;
    lnx = x0;
    for (int i = 2; i <= 7;i++)
    {
        lnx = lnx + 0.5 * powf(x0, i);
    }
    printf("Value of ln(%f) is %f", x, lnx);
}