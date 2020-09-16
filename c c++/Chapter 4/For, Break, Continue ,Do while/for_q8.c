/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to produce the following output:
                1
            2       3
        4       5       6
    7       8       9       10
        
*/

//Solution:
#include<stdio.h>

int main(void)
{
    int i, j,k=1;
    for (i = 0; i <= 4;i++)
    {
        for (j = 0; j < i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}