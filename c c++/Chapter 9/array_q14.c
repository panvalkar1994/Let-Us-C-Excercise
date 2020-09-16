/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to two 6x6 matrices.
*/

//Solution
#include<stdio.h>

int main(void)
{
    int C[6][6], i, j;
    int A[6][6] = {{1, 2, 3, 4, 5, 6},
                   {7, 8, 9, 10, 11, 12},
                   {13, 14, 15, 16, 17, 18},
                   {19, 20, 21, 22, 23, 24},
                   {1, 2, 3, 4, 5, 6},
                   {7, 8, 9, 10, 11, 12}};
    int B[6][6] = {{7, 8, 9, 10, 11, 12},
                   {13, 14, 15, 16, 17, 18},
                   {19, 20, 21, 22, 23, 24},
                   {1, 2, 3, 4, 5, 6},
                   {7, 8, 9, 10, 11, 12},
                   {19, 20, 21, 22, 23, 24}};
    for (i = 0; i < 6;i++)
    {
        for (j = 0; j < 6;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nA+B=C\nC=\n");
    for (i = 0; i < 6;i++)
    {
        for (j = 0; j < 6;j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}