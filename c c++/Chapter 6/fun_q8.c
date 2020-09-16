/*Solving problems from "Let Us C", Chapter 6,Functions & Pointers*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a recursive function to obtain the first 25 numbers of a fibonacci series. 
*/

//Solution
#include<stdio.h>

int recFib(int a, int b, int count);
int main(void)
{
    int a=0, b=1, n = 25;
    recFib(a, b, n);
}

int recFib(int a, int b, int count)
{
    if (count)
    {
        int temp = b;
        printf("%d ", b);
        b = b + a;
        a = temp;
        count--;
        recFib(a, b, count);
    }
}