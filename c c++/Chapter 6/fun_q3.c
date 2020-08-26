/*Solving problems from "Let Us C", Chapter 6,Functions & Pointers*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a general purpose function to convert any given year into its roman equivalent.
Use these roman equivalents for decimal numbers:
                1-I,
                5-V,
                10-X,
                50-L,
                100-C,
                500-D,
                1000-M
*/

//Note that i am not coding here the case of 4,9 etc. where roman is "iv" and "ix"

//Solution:
#include<stdio.h>

void roman(int i);
int main(void)
{
    int n;
    //Taking proper input
    do
    {
        printf("Enter Number: \n");
        scanf("%d", &n);
    } while (n<1);
    
    //Calling roman number converter
    roman(n);
    return 0;

}

void roman(int i)
{
    int n;
    n = i;
    if (n/1000 !=0)
        for (int i = 0; i < n / 1000;i++)
            printf("m");
    
    n = n % 1000;
    if(n/500!=0)
        for (int i = 0; i < n / 500;i++)
            printf("d");

    n = n % 500;
    if(n/100!=0)
        for (int i = 0; i < n / 100;i++)
            printf("c");
    
    n = n % 100;
    if(n/50!=0)
    for (int i = 0; i < n / 50;i++)
            printf("l");

    n = n % 50;
    if(n/10!=0)
        for (int i = 0; i < n / 10;i++)
            printf("x");
    n = n % 10;
    if(n/5!=0)
        for (int i = 0; i < n / 5;i++)
            printf("v");

    n = n % 5;
    if(n/1!=0)
        for (int i = 0; i < n /1;i++)
            printf("i");
}