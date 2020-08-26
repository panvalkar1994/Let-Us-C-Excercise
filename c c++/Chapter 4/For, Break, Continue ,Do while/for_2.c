/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to fill the entire screen with smiling face. The smiling face has an ASCII value 1.
*/

//Solution:
#include<stdio.h>

int main(void)
{
    int i;
    for (i=0;i<10000;i++)
        printf("%c ", 1);
}