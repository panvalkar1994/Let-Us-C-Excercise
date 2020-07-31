/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */

//Problem statment:
/*
Consider a currency system in which there are notes of seven denominations, namely, Re.1,Rs.2,Rs.5,Rs.10,Rs.50,Rs.100. If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.
*/

//Solution:

#include<stdio.h>

int main()
{
    /* Create variables to store different denominations.*/
    int N, n100, n50, n10, n5, n2, n1;
    /*Scan input from keyboard.*/
    printf("Please enter total currency: ");
    scanf("%d", &N);
    /* Calculate different denominations.*/
    n100 = N / 100;
    n50 = (N % 100) / 50;
    n10 = ((N % 100) % 50) / 10;
    n5 = (((N % 100) % 50) % 10) / 5;
    n2 = ((((N % 100) % 50) % 10) % 5) / 2;
    n1 = ((((N % 100) % 50) % 10) % 5) % 2;
    printf("Notes of Rs.100 = %d, Rs.50 = %d, Rs.10 = %d, Rs.5 = %d, Rs.2 = %d and Re.1=%d", n100, n50, n10, n5, n2, n1);
    return 0;
}