/*Solving problems from "Let Us C", Chapter 5,Case Control Instruction*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a menu driven program which has following options:
    1. Factorial of a number
    2. Prime or not
    3. Odd or Even
    4. Exit
Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the 'Exit' option the program should continue to run.
*/

//Solution:
#include<stdio.h>
#include<stdlib.h>

void Factorial(int i);
void PrimeOrNot(int i);
void OddOrEven(int i);

int main(void)
{
    int choice,num;
    while(1)
    {
        printf("Menu:\n 1. Factorial of a number\n 2. Prime or not\n 3. Odd or Even \n 4. Exit\n\n");
        printf("Please enter a number: \n");
        scanf("%d", &num);
        fflush(stdin);
        printf("Please Choose a menu by number: \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Factorial(num);
            break;
        case 2:
            PrimeOrNot(num);
            break;
        case 3:
            OddOrEven(num);
            break;
        case 4:
            exit(0);
        }
    }
}
void Factorial(int i)
{
    int n=1;
    for (int j = 1; j <= i;j++)
    {
        n = n * j;
    }
    printf("Factorial of %d is %d\n", i, n);
}

void PrimeOrNot(int i)
{
    int n = i / 2, flag = 0;
    for (int j = 2; j < n;j++)
    {
        if (i%j==0)
        {
            flag = 1;
            break;
        }
    }
    if (flag==1)
        printf("%d is Not a Prime\n", i);
    else
        printf("%d is a Prime number\n",i);
}

void OddOrEven(int i)
{
    if (i%2==0)
        printf("%d is Even\n", i);
    else
        printf("%d is Even\n", i);
}