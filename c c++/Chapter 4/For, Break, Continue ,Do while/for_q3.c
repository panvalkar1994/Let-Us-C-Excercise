/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to add first 7terms of the following series using for loop:
1/1!+2/2!+3/3!+...
*/

//Solution
#include<stdio.h>
#include<math.h>

int main(void)
{
    /*Create variables*/
    int j, i;
    float sum=0;
    for (i = 1; i <= 7;i++)
    {
        float fact=1;
        for (j = 1; j <= i;j++)
            fact = fact * j;

        sum = sum + i / fact;
    }
    printf("sum of 7 terms is %f", sum);
}