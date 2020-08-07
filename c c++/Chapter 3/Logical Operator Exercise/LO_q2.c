/*Solving problems from "Let Us C", Chapter 3,Logical Operator*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small letter, a digit or a special symbol.
            CHARACTERS          ASCII Values
            A-Z                 65-90
            a-z                 97-122
            0-9                 48-57
            special symbols     0-47,58-64,91-96,123-127
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variable to store input*/
    char c;
    int n;
    /*Scan information*/
    printf("Please enter a charcter: \n");
    scanf("%c", &c);
    /*Calculate ASCII value*/
    printf("%c %d \n", c, c);
    n = c;
    if (n>=65 && n<=90)
        printf("%c is a Uppercase letter", c);
    else if (n>=97 && n<122)
        printf("%c is lower case letter.");
    else if (n>=0 && n<=9)
        printf("%c is a digit");
    else
        printf("%c is a special symbol");
    return 0;
}