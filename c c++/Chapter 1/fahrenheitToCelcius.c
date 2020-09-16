/*Solving Problems from "Let US C", chapter1*/
/*Author: Vaibhav Panvalkar */

// Problem Statement
/*
Temperature of a city in fahrenheit degrees is input through the keyboard.Write a program to convert this temperature into Cetigrade degrees.
*/
//Solution:


#include<stdio.h>

int main()
{
    /*Create variables to store temperature in fahrenheit(fh) and celcius(C)*/
    float fh, C;
    /*Scan the temperature of a city*/
    printf("Please enter the temperature of your city in degree Fahrenheit: \n");
    scanf("%f", &fh);
    /*Convert temperature into degree celcius*/
    C = (fh - 32) / 1.8;
    /*Print Result upto two decimal(.2f)*/
    printf("Temperature of your city is %.2f degree Celcius.", C);
    return 0;
}