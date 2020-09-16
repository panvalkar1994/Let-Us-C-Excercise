/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
If an array arr contains n elements then write a program to check if arr[0]=arr[n-1], arr[1]=arr[n-2] and so on.
*/

//Solution

#include<stdio.h>

int main(void)
{
    int arr[] = {10, 13, 11, 12, 11, 13, 10};
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n;i++)
    {
        if (arr[i]==arr[n-i-1])
            continue;
        else 
        {
            printf("%d and %d Not Same\n",arr[i],arr[n-i-1]);
            return 0;
        }
    }
    printf("All is Well");
    return 0;
}