/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */
/*
Background: This example will clear how  the "If" Conditional used in C.

            if (This condition is true)
                Execute this statement;
*/

//Problem statment:
/*
While Purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If quantity and price per item are input through the keyboard, write a program to calculate the total expenses.
*/
//Solution:

#include<stdio.h>

int main()
{
    /* Create variables to store quantity, expenses,price per item*/
    int Q;//Q for qunatity
    float E, p;//E is Expenses and p is price per item
    /*Scan Quantity and price*/
    printf("Please Enter the Quantity of items: \n");
    scanf("%d", &Q);
    printf("Please enter price of 1 item: \n");
    scanf("%f", &p);
    /* Calculte Expanses*/
    E = Q * p;
    if (Q>=1000)
        E = E * 0.9;
    printf("Total Quantity is %d and rate is %f \n", Q, p);
    printf("Expenses: %.2f", E);
    return 0;
}