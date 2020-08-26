/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */

//Problem statment:
/*
If a four-digit number is input through the keyboard, write a program to obtain the sum of first and last digits of this number.
*/
//Solution:

#include<stdio.h>

int main()
{
    /*Create variables to store input, first number, last number and sum of first and last number.*/
    int num, first, last, sum;
    /* Take 4-digit number as input*/
    printf("Please enter a 4-digit number: \n");
    scanf("%d", &num);
    /* Extract first and last number.*/
    first = num / 1000;
    last = num % 10;
    sum = first + last;
    printf("Sum of first and last number: %d", sum);
    return 0;
}