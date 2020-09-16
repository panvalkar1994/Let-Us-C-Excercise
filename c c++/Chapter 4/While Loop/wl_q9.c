/*Solving problems from "Let Us C", Chapter 4,While loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to find the range of set of numbers entered through the keyboard. Range is the difference between the smallest and largest number in the list.
*/

//Solution:
#include<stdio.h>

int main(void)
{
    /*Create variables*/
    int min, max, range, num;
    char button = 'y';
    printf("Please enter first number from set:\n");
    scanf("%d", &num);
    min = max = num;

    while(button!='q')
    {
        printf("Please enter next number from your set: \n");
        scanf("%d", &num);
        fflush(stdin);
        if (num<=min)
            min = num;
        if (num>=max)
            max = num;
        printf("press 'q' to stop entering number else hit enter\n");
        scanf("%c", &button);
    }
    range = max - min;
    printf("Range of your set is=%d",range);
}