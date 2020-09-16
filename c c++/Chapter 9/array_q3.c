/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Implement the following procedure to generate prime numbers from 1 to 100 into a program. This procedure is called sieve of Eratosthenes.

    step 1: Fill an array num[100] with numbers from 1 to 100
    step 2: Start with second entry in the array, set all its multiples to zero
    step 3: Proceed to next non-zero element and set its all multiples of all the non-zero elements to zero.
    step 4: Repeat step 3 till you have set up the multiples of all nonzero elements to zero.
    step 5: At the conclusion of step 4, all the non-zero elements left in the array are prime numbers, print out these numbers.
*/

//Solution:
#include<stdio.h>

int main(void)
{
    int num[100];
    for (int i = 0; i < 100;i++)
    {
        num[i] = i+1;
        printf("%d ", num[i]);
    }
    printf("\n Sieve of Eratostenes:\n");
    for (int i = 1; i < 100;i++)
    {
        if (num[i]!=0)
        {
            for (int j = i+1; j < 100;j++)
            {
                int m = num[i], n = num[j];
                if (n%m==0)
                    num[j] = 0;
            }
        }
    }
    for (int i = 0; i < 100;i++)
    {
        if (num[i])
            printf("%d ", num[i]);
    }
    
    
    return 0;
}