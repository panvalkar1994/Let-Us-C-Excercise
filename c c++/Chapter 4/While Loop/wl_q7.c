/*Solving problems from "Let Us C", Chapter 4,While loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
*/

//Solution:
#include<stdio.h>

int main(void)
{
    /*Create variables to store count of positive, negative and zeros*/
    int pos=0, neg=0, zero=0,num;
    char flag;
    while(flag!='q')
    {
        printf("Enter a number: \n");
        scanf("%d", &num);
        fflush(stdin);
        if(num>0)
            pos++;
        else if (num==0)
            zero++;
        else if (num<0)
            neg++;
        else
            printf("input is other than digit\n");
        printf("if you want quite, enter 'q' else enter any character \n");
        scanf("%c", &flag);
    }
    printf("You entered %d Postive numbers,%d negative numbers and %d zeros.", pos, neg, zero);
}