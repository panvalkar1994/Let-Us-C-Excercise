/* "Let Us C", chapter1, problem solution*/
/*Author: Vaibhav Panvalkar*/

//Problem statement:

/*
Two numbers input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
*/

//Solution:

#include<stdio.h>

int main()
{
    /* Create C and D variable to store data. Also create a temperory variable for interchange purpose.*/
    int C,D,temp;
    /*Scan values for C and D*/
    printf("Please Enter value for C: \n");
    scanf("%d",&C);
    printf("Please Enter value for D: \n");
    scanf("%d",&D);
    printf("You entered C= %d and D=%d\n",C,D);
    /*Store value of C into temp, then store value of D into C, finally store value of temp into D.*/
    temp=C;
    C=D;
    D=temp;
    /*Print Output*/
    printf("Your new values for C=%d and D=%d",C,D);
    return 0;
}