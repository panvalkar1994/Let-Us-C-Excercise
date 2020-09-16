/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Ramanujan number is the smallest number that can be expressed as sum of two cubes in two different ways. Write a program to print all such numbers up to a reasonable limit.
*/

//Solution:
#include<stdio.h>
#include<math.h>

const int COUNT = 20;

int main(void)
{
    int num, rn;
    for (int i = 1; i < COUNT;i++)
    {
        for (int j = 1; j < i;j++)
        {
            num = pow(i, 3) + pow(j, 3);
            for (int k = 1; k < COUNT;k++)
            {
                for (int l = 1; l < k;l++)
                {
                    rn = pow(l, 3) + pow(k, 3);
                    if ((l!=i) && (l!=j) && num==rn)
                        printf("%d is a Ramanujan number of %d and %d\n", rn, l, k);
                }
            }
        }
    }
}