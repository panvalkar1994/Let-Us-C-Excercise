/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */

//Problem statment:
/*
Write a program to receive Cartesian co-ordinates(x,y) of a point and convert them into polar co-ordinates(r,theta).
*/

//Solution:
#include<stdio.h>
#include<math.h>
int main()
{
    /* Create variables to store (x,y) and give polar co-ordinates*/
    float x, y, r, theta;
    /* Take input in Cartesian co-ordinates*/
    printf("Please enter value of x co-ordinate: \n");
    scanf("%f", &x);
    printf("Please enter value of y co-ordinate: \n");
    scanf("%f", &y);
    /*Formulae*/
    r = sqrt(x * x + y * y);
    theta = atanf(y/x)*(180/3.14);
    printf("polar co-ordinates:(%f,%.1f)", r, theta);
    return 0;
}