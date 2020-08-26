/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
When interest compounds q times per year at an anual rate of r% for an n years, the principal p compounds to an amount a as per the following formula
            a=p(1+r/q)^nq
Write a program to read 10 sets of p,r,n & q and calculate the corresponding as.
*/
#include<stdio.h>
#include<math.h>

int main(void)
{
    int i;
    float a=0, p, n, q,r;
    for (i = 0; i < 10;i++)
    {
        printf("Please enter principal(p), compunded per year(q),rate(r), years(n):\n ");
        scanf("%f %f %f %f",&p,&q,&r,&n);
        fflush(stdin);
        a = p * powf((1 + (r / q)), n * q);
        printf("Amount : %f\n", a);
    }
}