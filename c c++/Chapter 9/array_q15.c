/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to multiply any two 3x3 matrices.
*/

//Solution
#include<stdio.h>

int main(void)
{
    int A[3][3] = {{1, 2, 3},
                   {1, 2, 3},
                   {1, 2, 3}};
    int B[3][3] = {{1, 0, 0},
                   {0, 1, 0},
                   {0, 0, 2}};
    int i, j, k, C[3][3], total = 0;
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 3;j++)
        {
            total = 0;
            for (k = 0; k < 3;k++)
            {
                total = total + A[i][k] * B[k][j];
            }
            C[i][j] = total;
        }
    }
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 3;j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}