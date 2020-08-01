/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Given the coordinates (x,y) of center of a circle and its radius, write a program to determine if a point lies inside, on  or outside of the circle.
*/
//Solution
#include<stdio.h>
#include<math.h>

int main()
{
    /*Create variables to store center, radius and point*/
    float x, y, x1, y1, r, dis;
    /*Scan input*/
    printf("Please enter center of the cirle (x,y)\n");
    scanf("%f %f", &x, &y);
    printf("Center of the circle is (%f,%f)\n ", x, y);
    printf("Please enter the radius of this circle: \n");
    scanf("%f", &r);
    printf("Radius = %f\n", r);
    printf("Please enter the point:\n");
    scanf("%f %f", &x1, &y1);
    printf("Your point (%f,%f)\n", x1, y1);
    /*Check location of the point*/
    dis = powf((powf(x - x1, 2) + powf(y - y1, 2)), 0.5);
    if (dis==r)//On the circle
        printf("Given point lies on circle.");
    else if (dis>r)//Outside the circle
        printf("Given point lies outside of the circle.");
    else//Inside the circle
        printf("Given point is inside of the circle");
    return 0;
}