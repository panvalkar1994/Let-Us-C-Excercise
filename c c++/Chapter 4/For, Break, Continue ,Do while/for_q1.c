/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to print all prime numbers from 2 to 300.
*/

//Solution:
#include<stdio.h>

int main(void)
{
    int i, j, prime=0;
    for (i = 2; i <= 300; i++)
    {
        for (j = 2; j < i/2;j++)
        {
            if (i%j==0)
            {
                prime++;
                break;
            }
        }
        if (prime==0)
            printf("%d is a prime number\n", i);
        prime = 0;

    }
}