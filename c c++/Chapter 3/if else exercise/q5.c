/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
A five-digit number is entered through the keyboard. Write a program to obtain reverse of this number and to determine whether the original and reverse number are equal.
*/
//Solution

#include<stdio.h>

int main()
{
    /* Create variables to store digits input from keyboard and reverse number.*/
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
    printf("Reverse Number : %d\n", reverse_num);
    if (number==reverse_num)
        printf("Both numbers are equal.");
    else
        printf("Both numbers are not equal.");
    return 0;
}