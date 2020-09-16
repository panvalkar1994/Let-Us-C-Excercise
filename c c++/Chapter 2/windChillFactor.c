/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */

//Problem statment:
/*
Wind Chill Factor is the felt air temperature on exposed skin due to wind. The wcf temperature is always lower than the air temperature, and is calculated as per the following formula:
    wcf=35.74+0.6215t+(0.4275t-35.75)*v^0.16
Write a program to receive values of temperature and wind velocity and calculate wind chill factor.
*/
//Solution:


#include<stdio.h>
#include<math.h>

int main()
{
    /* Create variables to store wind speed,temperature, wcf */
    float t, v, wcf;
    /*Scan input from keyboard*/
    printf("Please enter velocity of wind: \n");
    scanf("%f", &v);
    printf("Please enter temperature of the wind: \n");
    scanf("%f", &t);
    /*Calculate wcf using given formula*/
    wcf = (35.74 + 0.6215 * t) + (0.4275 * t - 35.75) * powf(v, 0.16);
    /*Print result*/
    printf("Calculated wind chill factor, wcf=%f", wcf);
    return 0;
}