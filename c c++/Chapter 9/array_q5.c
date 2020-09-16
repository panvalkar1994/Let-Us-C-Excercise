/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to copy the contents of one array into another in reverse order.
*/

//Solution
#include<stdio.h>

int main(void)
{
    int arr1[] = {25, 30, 35, 40, 45};
    int n = sizeof(arr1) / 4;
    int arr2[5];
    printf("Before:\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d ", arr1[i]);
    }
    for (int i = 0; i < n;i++)
    {
        arr2[n - i - 1] = arr1[i];
    }
    printf("\nAfter: \n");
    for (int i = 0; i <n; i++)
    {
        printf("%d ", arr2[i]);
    }
    
}