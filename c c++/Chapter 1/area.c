/*Solving Problems from "Let US C", chapter1*/
/*Author: Vaibhav Panvalkar */

// Problem Statement
/*
The length and breadth of a rectangle and radius of a circle are input through keyboard.
Write a program to calculate the area and the parameter of the rectangle, and the area and 
and circumference of the circle.
*/
//Solution

#include<stdio.h>

int main()
{
    /* Create variables*/
    float length,breadth,radius,area_r,perimeter,circumference,area_c;
    /* Define Pie*/
    float pi=3.14;

    /* Take input for rectangle*/
    printf("Enter the length of the rectangle:\n");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%f",&breadth);

    /*Take input for Circle */
    printf("Enter the radius of the circle:\n");
    scanf("%f",&radius);

    /* Calculate Area and perimeter for rectangle*/
    area_r=length*breadth;
    perimeter=2*(length+breadth);
    printf("Area of the Rectangle is: %f\n",area_r);
    printf("Perimeter of the Rectangle is: %f\n",perimeter);
    
    /* Calculate Area and cercumference of the circle */
    area_c=pi*radius*radius;
    circumference=2*pi*radius;
    printf("Area of the circle: %f\n",area_c);
    printf("Circumference of the circle: %f\n",circumference);
    return 0;
}