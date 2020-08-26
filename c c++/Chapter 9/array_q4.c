/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Twenty-five numbers are entered through the keyboard into an array. Write a program to find out how many of them are positive, negative, even and odd.
*/

//Solution
#include<stdio.h>

int main(void)
{
    int num[25], pos = 0, neg = 0, even = 0, odd = 0;
    int *ptr;
    ptr = num;
    printf("Enter Numbers: \n");
    for (int i = 0; i < 25;i++)
    {
        printf("%d th number\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 25;i++)
    {
        if (num[i]>0)
        {
            pos++;
        }
        else 
        {
            neg++;
        }
        if(num[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("Positive Numbers=%d , Negtive numbers=%d, Even Numbers=%d, Odd Numbers=%d", pos, neg, even, odd);
    return 0;
}