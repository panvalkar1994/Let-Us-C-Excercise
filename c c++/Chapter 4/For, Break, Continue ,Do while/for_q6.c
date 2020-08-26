/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to print the multiplication table of the number entered by the user. The table should get displayed in the following form:
        29x1=29
        29x2=58
        ...
*/

//Solution:
#include<stdio.h>

int main(void)
{
    /*Create variables*/
    int num, times, result;
    /*Scan number from user*/
    printf("Please enter a number to get its multiplication table:\n");
    scanf("%d", &num);
    printf("The mulitplication Table of %d is as follow:\n", num);
    /*for loop to generate table*/
    for (times = 1; times <= 10;times++)
    {
        result = num * times;
        printf("%d x %d = %d\n", num, times, result);
    }
}