/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to find if a square matrix(3x3) is symmetric.
*/

//Solution
#include<stdio.h>

int main(void)
{
    int matrix[3][3];
    int i, j;
    for (i = 0; i < 3;i++)
    {
        printf("Enter row %d: \n",i+1);
        for (j = 0; j < 3;j++)
        {
            printf("Enter number: \n");
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    printf("Matrix: \n");
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 3;j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 3;j++)
        {
            if (matrix[i][j]!=matrix[j][i])
            {
                printf("Matrix is not symmetric\n");
                return 0;
            }
        }
    }
    printf("Matrix is symmetric\n");
}
