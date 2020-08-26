/*Solving problems from "Let Us C", Chapter 6,Functions & Pointers*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
A positive integer is entered through the keyboard, write a function to find the binary equivalent of this number: 
    1. Without using Recursion
    2. Using Recursion
*/

//Solution
#include<stdio.h>
#include<math.h>

int Bin(int i);
int recBin(int i);
int main(void)
{
    int n;
    do
    {
        printf("Enter Number: \n");
        scanf("%d", &n);
    } while (n<0);
    printf("%d in binary without Recursion: \n",n);
    Bin(n);
    printf("%d in binary with Recursion: \n",n);
    recBin(n);
}

int Bin(int i)
{
    int count = 0;
    int rem, out = 0;
    printf("%d\n", out);
}

int recBin(int i)
{
    if (i>1)
    {
        int rem,out;
        rem = i % 2;
        i = i / 2;
        out=recBin(i);
        printf("%d", rem);
    }
    else
    {
        printf("%d",i);
        return 0;
    }
}