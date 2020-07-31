/*Solving Problems from "Let US C", chapter1*/
/*Author: Vaibhav Panvalkar */

// Problem Statement

/*
The distance between two cities (in kms.) is input through the keyboard. write a program to convert and print this distance in meters, feet, inches and centimeters.
*/

//Solution:

#include<stdio.h>

int main()
{
    /*Create variables to store distance in km,m,ft,in,cm*/
    float km, m, ft, in, cm;
    /*Scan distance between two ciies in kms.*/
    printf("Please Enter the distance between two cities in kms.:\n");
    scanf("%f", &km);
    /*Formulae*/
    m = km * 1000;//convert into meters
    ft = m * 0.3048;//convert meters into feet
    in = ft * 12;//convert feet into inch
    cm = m * 100;//convert meters into cm
    /*Printing results*/
    printf("Distance between cities: %.2f kms or %.2f meters or %.2f feets or %.2f inches or %.2f cms",km,m,ft,in,cm);
    return 0;
}