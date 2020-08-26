/*Solving problems from "Let Us C", Chapter 4,While loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program for matchstick game being played between computer and a user. Your program should ensure that computer always wins. Rules for the game are as follows:
    - There are 21 matchsticks.
    - One can pick 1/2/3/4 matchsticks for his/her turn.
    - After the person picks, the computer does its picking.
    - Whoever is forced to pick last loses the game.
*/

//Solution:
#include<stdio.h>

int main(void)
{
    int match = 21, cc, uc,flag=0;
    while (match>0)
    {
        /*user input*/
        uc = -1;
        while (uc<1 || uc>4 && match==1)
        {
            printf("Choose a number from (1,2,3,4)\n");
            scanf("%d", &uc);
        }
        match = match - uc;
        printf("You Chose %d and match remaining %d\n", uc, match);
        if (match==0)
            flag = 1;
        /*Computer Chose*/
        if (match>0)
        {
            cc = 5 - uc;
            match = match - cc;
            printf("Computer Chose %d and match remaining %d\n", cc, match);  
        }   
        if (match==0)
            flag = 0;
    }
    if (flag==1)
        printf("You lose!\n");
    else
        printf("Computer lose!\n");
}