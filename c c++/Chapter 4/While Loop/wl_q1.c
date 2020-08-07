/*Solving problems from "Let Us C", Chapter 4,While loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12 per hour for every hour above 40 hours. Assume that employees do not work for fractional part of an hour.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variables to store overtime, pay*/
    int num_of_employees=1, hr, ot;
    while (num_of_employees<=10)
    {
        printf("please enter number of hour employee %d did overtime: \n", num_of_employees);
        ot = 0;
        scanf("%d", &hr);
        if (hr>40) 
        {
            ot = (hr - 40) * 12;
        }
        printf("over time to employee %d is %d\n", num_of_employees, ot);
        num_of_employees++;
    }
    return 0;
}