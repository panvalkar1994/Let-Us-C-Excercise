/* Solving questions from "Let Us C" Chapter1*/
/* Author: Vaibhav Panvalkar*/

//Problem statement
/*
Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary,
and house rent allowance is 20% of the basic salary. Write a program to calculate his gross salary.
*/

//Solution:


#include<stdio.h>

int main()
{
    int basic;
    float da_per,hra_per,gross;
    printf(" Please enter basic salary: \n");
    scanf("%d",&basic);
    da_per=40;
    hra_per=20;
    /* Formula to Calculate Gross Salary */
    gross=basic*da_per/100+basic*hra_per/100+basic;
    /* Show output of Gross Salary */
    printf("Gross Salary, %f",gross);

    return 0;
}