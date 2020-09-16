/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to generate all Pythagorean triplets with side length less than or equal to 30.
*/

//Solution:
#include<stdio.h>

int main(void)
{
    int i, j, k;
    printf("All Pythagorean triplets upto 30 are as follow:\n");
    for (i = 1; i <= 30;i++)
    {
        for (j = 1; j <=i;j++)
        {
            for (k = 1; k <=j;k++)
            {
                if (i*i==(j*j+k*k))
                {
                    printf("%d , %d , %d \n", i, j, k);
                    break;
                }
            }
        }
    }
}