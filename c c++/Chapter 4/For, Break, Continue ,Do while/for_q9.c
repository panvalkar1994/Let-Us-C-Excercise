/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
According to a study the approximate level of intelligence of a person can be calculated using the following formula:
i=2+(y+0.5x)
write a program that will produce a table of values of i, y and x, where y varies from 1 to 6, and, for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.
*/

//Solution:
#include<stdio.h>

int main(void)
{
    float i, x, y;
    printf("i\tx\ty\n");
    for (x = 1; x <= 6;x++)
    {
        for (y = 5.5; y <= 12.5;y=y+0.5)
        {
            i = 2 + (y + 0.5 * x);
            printf("%.2f\t%.2f\t%.2f\n", i, x, y);
        }
    }
}