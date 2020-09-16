/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
How will you initialize a three-dimensional array thread[3][2][1]?
How will refer to first and last element of the array
*/

//Solution
#include<stdio.h>

int main(void)
{
    int thread[3][2][1] = {
        {{1}, {2}},
        {{3}, {4}},
        {{5}, {6}},
    };
    int i, j, k = 0;
    printf("thread:\n");
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 2;j++)
        {
            printf("%d ", *(*(*(thread + i) + j) + k));
        }
        printf("\n");
    }
    printf("First: %d %d\n", thread[0][0][0],***thread);
    printf("Last: %d %d", thread[2][1][0], *(*(*(thread + 2) + 1) + 0));

    return 0;
}