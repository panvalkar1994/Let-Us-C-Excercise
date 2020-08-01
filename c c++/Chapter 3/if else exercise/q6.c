/*Solving problems from "Let Us C", Chapter 3*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
If the ages of Ram, Shyam and Ajay are input through keyboard, write a program to determine the youngest of the three.
*/
//Solution
#include<stdio.h>

int main()
{
    /*Create variables to store ages of three freinds*/
    int r, s, a; // Age of Ram(r),Shyam(s) and Ajay(a)
    /*take input from keyboard*/
    printf("Please enter ages of Ram, Shyam and Ajay: \n");
    scanf("%d %d %d", &r, &s, &a);
    /*Check which is younger*/
    if (r==s && s==a)//All Equal
        printf("All are of equal Age");
    else if (r>=s && a>=s)//Shyam and may be one more younger
    {
        if (r==s)
            printf("Ram And Shyam both are younger.");
        else if (s==a)
            printf("Shyam and Ajay both younger.");
        else
            printf("Shyam is youngest");  
    }
    else if (s>=r && a>=r)//Ram or Ram and Ajay younger
    {
        if (r==a)
            printf("Ram And Ajay both are younger");
        else
            printf("Ram is younger");
    }
    else//Ajay younger
        printf("Ajay is Younger.");
    return 0;
}