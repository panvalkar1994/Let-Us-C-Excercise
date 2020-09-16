/*Solving problems from "Let Us C", Chapter 4,While loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to print out all Armstrong numbers between 1 and 500.If sum of cubes of each digit of number is equal to the number itself, then the number is called an Armstrong number. For example, 153=(1*1*1)+(5*5*5)+(3*3*3)
*/

//Solution:
#include<stdio.h>

int main(void)
{
    int i=1, d1, d2, d3;
    while(i<501)
    {
        d1 = i % 10;//unit digit
        d2 = (i % 100) / 10;//2nd digit
        d3 = i / 100;//3rd digit
        if (i==(d1*d1*d1+d2*d2*d2+d3*d3*d3))
            printf("%d is an Armstrong number\n", i);
        i++;
    }
}