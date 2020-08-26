/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to produce the following output:
        A B C D E F G F E D C B A
        A B C D E F _ F E D C B A
        A B C D E _ _ _ E D C B A
        A B C D _ _ _ _ _ D C B A
        A B C _ _ _ _ _ _ _ C B A
        A B _ _ _ _ _ _ _ _ _ B A
        A _ _ _ _ _ _ _ _ _ _ _ A
        
*/

//Solution:
#include<stdio.h>

int main(void)
{
        int i, j, k = 0;
        for (j = 0; j < 7;j++)
        {
                for (i = 65; i <= 71; i++)
                {
                        if (k+i>71)
                                printf("  ");
                        else
                                printf("%c ", i);
                }
                for (i = 70; i >= 65;i--)
                {
                        if (k+i>71)
                                printf("  ");
                        else if (i==65)
                                printf("%c\n", i);
                        else
                                printf("%c ", i);
                }
                k++;
        }
}