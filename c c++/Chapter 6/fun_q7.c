/*Solving problems from "Let Us C", Chapter 6,Functions & Pointers*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
A Positive number is entered through keyboard. Write a program to print all of its prime factors using recursion.
*/

//Solution:
#include<stdio.h>

int recPrime(int i, int p);
int main(void)
{
    int n,p=2;
    do
    {
        printf("Enter a positive number: \n");
        scanf("%d", &n);
    } while (n<1);
    printf("Prime factors of %d\n", n);
    recPrime(n, p);
    return 0;
}

int recPrime(int i,int p)
{
    if (0<i && (i%p==0))
    {
        printf("%d ", p);
        i = i / p;
        recPrime(i, p);
    }
    else 
    {
        p++;
        recPrime(i, p);
    }
}