/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program using pointers to find the smallest number in the array of 25 integers.
*/
//Solution

#include<stdio.h>

int main(void)
{
    int num[25] = {235, 224, 213, 242, 231,
                   290, 139, 158, 17, 136, 1185, 14,
                   131, 12, 11, 1380, 829, 995, 327, 607,
                   531, 48, 383, 211, 31};

    int *ptr, *small;
    //Printing array
    ptr = num;
    for (int i = 0; i < 25;i++)
    {
        printf("%d ",num[i]);
    }
    *small = *ptr;
    for (int i = 0; i < 25;i++)
    {
        if (*small>=*ptr)
        {
            small = ptr;
        }
        ptr++;
    }
    printf("\n %d \n",*small);
}