/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */

//Problem statment:
/*
If a five-digit number is input through the keyboard, write a program to reverse the number.
*/
//Solution:


#include<stdio.h>

int main()
{
    /* Create variables to store digits and input from keyboard.*/
    int number, n1, n2, n3, n4, n5, reverse_num;
    /* Take input from keyboard.*/
    printf("Please enter 5-digit number: \n");
    scanf("%d", &number);
    /* Calculate digits and reverse numbers */
    n5 = number / 10000;
    n4 = (number % 10000) / 1000;
    n3 = (number % 1000) / 100;
    n2 = (number % 100) / 10;
    n1 = (number % 10);
    reverse_num = n1 * 10000 + n2 * 1000 + n3 * 100 + n4 * 10 + n5;
    printf("Reverse Number : %d", reverse_num);
    return 0;
}