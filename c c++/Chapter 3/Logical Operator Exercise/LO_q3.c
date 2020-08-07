/*Solving problems from "Let Us C", Chapter 3,Logical Operator*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
A certain grade of steel is graded according to the following conditions:
    (i) Hardness must be greater than 50.
    (ii) Carbon content must be less than 0.7
    (iii) Tensile strength must be greater than 5600
The grades are as follows:
    Grade is 10 if all three conditions are met
    Grade is 9 if conditions (i) and (ii) are met
    Grade is 8 if condition (ii) and (iii) are met
    Grade is 7 if condition (i) and (iii) are met
    Grade is 6 if only one condition is met
    Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variables to store hardness,carbon content, tensile strength and grade*/
    float hd, cc, ts;//hd-hardness,cc-carbon content,ts-tensile strength
    int Grd;//Grd-Grade
    /*Scan input*/
    printf("Please enter hardness, carbon content and tensile strength: \n");
    scanf("%f %f %f", &hd, &cc, &ts);
    /*Differentiate on basis of conditions*/
    if (hd>50 && cc<0.7 && ts>5600)
        printf("Grade is 10 for this steel");
    else if (hd>50 && cc<0.7 && ts<=5600)
        printf("Grade is 9 for this steel");
    else if (cc<0.7 && ts>5600)
        printf("Grade is 8 for this steel.");
    else if (hd>50 && ts>5600)
        printf("Grade is 7 for this steel.");
    else if ((hd>50 && cc>=0.7 && ts<5600)||(hd<50 && cc<0.7 && ts<5600)||(hd<50 && cc>=0.7 && ts>=5600))
        printf("Grade is 6");
    else
        printf("Grade is 5");
    return 0;
}