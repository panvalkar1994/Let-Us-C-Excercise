/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to obtain transpose of a 4x4 matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column.
*/

//Solution

#include<stdio.h>

int main(void)
{
    int trA[4][4], i, j;
    int A[4][4] = {
        {16, 26, 36, 46},
        {11, 21, 31, 41},
        {12, 22, 32, 42},
        {13, 23, 33, 43}};

    printf("Matrix A:\n");
    for (i = 0; i < 4;i++)
    {
        for (j = 0; j < 4;j++)
        {
            printf("%d ", A[i][j]);
            trA[i][j] = 0;
        }
        printf("\n");
    }
    //Transpose
    for (i = 0; i < 4;i++)
    {
        for (j = 0; j < 4;j++)
        {
            trA[j][i] = A[i][j];
        }
    }
    printf("\nDisplay transpose A:\n");
    for (i = 0; i < 4;i++)
    {
        for (j = 0; j < 4;j++)
        {
            printf("%d ", trA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
}