/*Solving problems from "Let Us C", Chapter 4,While loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Two numbers are entered through keyboard. write a program to find the value of one number raised to the power of another.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variables to store number, power and result*/
    int num, expo, power;
    /*Take input*/
    printf("please enter a number and its exponent: \n");
    scanf("%d %d", &num, &expo);
    /*Calculate power*/
    power = 1;
    while (expo>0 && num!=0)
    {
        power = power * num;
        expo--;
    }
    if (num == 0 && expo==0)
        power = 0;
    printf("power %d", power);
    return 0;
}