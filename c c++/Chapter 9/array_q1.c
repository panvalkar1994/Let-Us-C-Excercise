/*Solving problems from "Let Us C", Chapter 7,Data Types Revisited*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Twenty-five numbers are enetered from the keyboard into an array. The number to be searched is entered through the keyboard by the user. Write a program to find if the number to be searched is present in the array and if it present, display the number of times it appears in the array.
*/
//Solution:
#include<stdio.h>

int main(void)
{
    int count = 0, arr[25],q;
    //Fill array
    while(count<25)
    {
        printf("Enter number: \n");
        scanf("%d", &arr[count]);
        count++;
    }
    //reset counter and ask for search number
    count = 0;
    printf("Enter number to be searched: \n");
    scanf("%d", &q);
    for (int i = 0; i < 25;i++)
    {
        if (q==arr[i])
            count++;
    }
    printf("%d appeared %d times", q, count);
    return 0;
}