/*Solving problems from "Let Us C", Chapter 7,Data Types Revisited*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
What will be the output of the following program
*/
#include<stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 50000;i++)
        printf("%d\n", i);
    return 0;
}
//Solution:
/*
Expected output is:
for loop will be executed for 50001 times and printed numbers on each time on new line starting from 0 to 50000.
Program will end with returning 0.
*/