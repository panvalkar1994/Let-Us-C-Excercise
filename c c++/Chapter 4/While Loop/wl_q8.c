/*Solving problems from "Let Us C", Chapter 4,While loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to recieve an integer and find its octal equivalent.
Hint: To obtain Octal equivalent of an integer, divide it continuously by 8 till divident dosen't become zero, then write the remainder obtained in reverse order.
*/

//Solution:
#include<stdio.h>
#include<math.h>

int main(void)
{
    /*Create variables*/
    int num=0, count=0, rem=0, div=0;
    float oct = 0;// oct is in float so that machine precision limit will not add up to give wrong result.
    /*Input*/
    printf("Enter number to be convert into octal number.\n");
    scanf("%d", &num);
    div = num;
    /*Calculate octal number*/
    while (div!=0)
    {
        rem = div % 8;
        oct = oct + rem * pow(10, count);
        div = div / 8;
        count++;
    }
    printf("Octal output=%.f", oct);
}