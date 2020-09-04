/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Given an array p[5], Write a function to shift it circularly left by two positions. Thus, p[5]={15,30,28,19,61} after shift will be 
                    p[5]={28,19,61,15,30}
Call this function of matrix(4x5) and get it's row left shifted.
*/

//Solution
#include<stdio.h>

int rowShift(int *ptr,int *q);
int main(void)
{
    int i, j, p[5] = {15, 30, 28, 19, 61};
    int lshift[5];
    rowShift(p,lshift);
    for (i = 0; i < 5;i++)
    {
        printf("%d ", *(p+i));
    }
    printf("\n");
    for (i = 0; i < 5;i++)
    {
        printf("%d ", *(lshift+i));
    }
    return 0;

}

int rowShift(int *ptr,int *q)
{
    for (int i = 0; i < 5;i++)
    {
        if(i<2) 
        {
            q[i + 3] = *ptr;
            ptr++;
        }
        else
        {
            q[i - 2] = *ptr;
            ptr++;
        }
        
    }
}