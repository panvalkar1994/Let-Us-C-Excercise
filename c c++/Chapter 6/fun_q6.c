/*Solving problems from "Let Us C", Chapter 6,Functions & Pointers*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
A 5-digit positive integer is entered through the keyboard, write a recursive and non-recursive function to calculate sum of digits of the 5-digit number.
*/

//Solution:
#include<stdio.h>

int nonRec(int n);
int Recursive(int n);
int main(void)
{
    int n,nnRec,Rec;
    printf("Enter 5-digit Number: \n");
    scanf("%d", &n);
    nnRec = nonRec(n);
    printf("Non Recurssive method sum =%d\n", nnRec);
    Rec = Recursive(n);
    printf("%d",Rec);
}

int nonRec(int n)
{
    int sum=0;
    do
    {
        sum = sum + (n % 10);
        n = n / 10;
    } while (n>=10);
    return sum+n;
}

int Recursive(int n)
{
    if (n<10)
        return n;
    else
        return (n % 10) + Recursive(n / 10);
}