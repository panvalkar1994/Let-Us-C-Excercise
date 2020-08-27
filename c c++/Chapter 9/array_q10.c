/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to pick up the largest number from any 5 rows and 5 columns.
*/

//Solution
#include<stdio.h>

int main(void)
{
    int matrix[5][5] = {
        {10, 20, 30, 40, 50},
        {11, 21, 31, 41, 51},
        {11, 12, 13, 14, 15},
        {12, 22, 32, 42, 52},
        {15, 25, 35, 54, 25},
    };
    int i, j, flag,max;
    //Display matrix
    printf("Matrix:\n");
    for (int i = 0; i < 5;i++)
    {
        for (int j = 0; j < 5;j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    while (1)
    {
        printf("Enter 1 for column or 0 for row: \n");
        scanf("%d", &flag);
        if (flag == 1)
            break;
        if (flag == 0)
            break;
    }
    //Select column and display
    if (flag)
    {
        printf("Select Column: \n");
        scanf("%d", &i);
        max = *(*(matrix) + i);
        for (int k = 0; k < 5;k++)
        {
            printf("%d\n", *(*(matrix + k) + i));
            if (max<=*(*(matrix + k) + i))
                max = *(*(matrix + k) + i);
        }
        printf("\n%d is max in column %d", max, i);
    }
    else //Select Row and display max
    {
        printf("Select Row: \n");
        scanf("%d", &j);
        max = *(*(matrix + j));
        for (int k = 0; k < 5;k++)
        {
            printf("%d ", *(*(matrix + j) + k));
            if (max<=*(*(matrix + j) + k))
                max = *(*(matrix + j) + k);
        }
        printf("\n%d is max in column %d", max, j);
    }
    return 0;
}