/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */
/*
In this example i will show how to solve complicate logic with if-else-if nesting.
*/

//Problem statment:
/*
Write a program to calculate the salary as per the table shown in image "Salary.PNG".
*/
// Solution:


#include<stdio.h>

int main()
{
    /*Create vatiables to store information of employee*/
    char sex,qual;//qual-Qualification
    int yos,sal = 0;//yos-years of service, sal-Salary
    /*Take input from user*/
    printf("Please enter Gender(M/F), Years of Service, Qualification(U/P):\n");
    scanf("%c %d %c", &sex, &yos, &qual);
    /*Logic of deciding Salary*/
    if ((sex=='M') && (yos>=10) && (qual=='P'))
        sal = 15000;
    else if ((sex=='F')&&((qual=='P' && yos<10)||(qual=='U' && yos>=10)))
        sal = 12000;
    else if ((sex=='M')&&((qual=='U' && yos>=10)||(qual=='P' && yos<10)))
        sal = 10000;
    else if (sex =='F' && qual=='U' && yos<10)
        sal = 10000;
    else if (sex=='M' && yos<10 && qual=='U')
        sal = 7000;
    else
        sal = 16000;
    printf("Salary is %d", sal);
}