/*Solving problems from "Let Us C", Chapter 6,Functions & Pointers*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.
*/

//Solution:
#include<stdio.h>

void factors(int n);
int main(void)
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    factors(n);
}



void factors(int n)
{
    int m = n;
    for (int i = 2; i < n;i++)
    {
        while(m%i==0)
        {
            printf("%d ", i);
            m = m / i;
        }
    }
}
