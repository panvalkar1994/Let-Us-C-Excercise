/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Given the length and breadth of the rectangle, write a program to find whether the are of the rectangle is greater than it's perimeter.
*/
//Solution
#include<stdio.h>

int main()
{
    /*Create variables to store length,breadth , area and perimeter*/
    int l, b, area, peri;
    /*Scan length and breadth*/
    printf("Please enter length and breadth of the rectangle: \n");
    scanf("%d %d", &l, &b);
    /*Formulae*/
    area = l * b;
    peri = 2 * (l + b);
    /*Show result*/
    if (area>peri)
        printf("Area is Greater than perimeter.");
    else if (area == peri)
        printf("Area and Perimeter is equal.");
    else
        printf("Perimeter is greater than area.");
    return 0;
}