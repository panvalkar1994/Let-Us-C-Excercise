/*Eamples from "Let US C", chapter 3*/
/*Author: Vaibhav Panvalkar */
/*
In this example I will explore how to use if and else conditional statements. How to take action if certain condition is true or do another action if the condition is false.
*/

//Problem statment:
/*
In a company an employee is paid as under:
If his/her basic salary is less than Rs.15000, then HRA=10% of the basic salary and DA=90% of basic salary. If his salary is either equal to or above Rs.15000, then HRA=Rs.5000 and DA=98% of the basic salary. If the employee's salary is input through the keyboard write a program to find his gross salary.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variables to store basic salary, HRA, DA,Gross Salary*/
    float bs, hra, da, gs;//bs-basic salary,gs-gross salary
    /*take basic salary as input from user*/
    printf("Please enter the basic salary: \n");
    scanf("%f", &bs);
    /*Calculate the gross salary*/
    if (bs<15000)//Basic salary is less than 15000, code block of if
    {
        hra = bs * 0.1;
        da = bs * 0.9;
        gs = bs + hra + da;
    }
    else//basic salary more than or equal to 15000, code block of else
    {
        hra = 5000;
        da = bs * 0.98;
        gs = bs + hra + da;
    }
    printf("Gross salary: Rs. %f", gs);
    return 0;
}