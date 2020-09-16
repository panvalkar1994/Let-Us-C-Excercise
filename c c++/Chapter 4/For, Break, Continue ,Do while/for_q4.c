/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to generate all combinations of 1,2 and 3 using for loop.
*/ 

//Solution
#include<stdio.h>

int main(void)
{
    int i, j, k;
    for (i = 1; i <= 3;i++)
    {
        for (j = 1; j <= 3;j++)
        {
            for (k = 1; k <= 3;k++)
                printf("%d,%d,%d\n", i, j, k);
        }
    }
}