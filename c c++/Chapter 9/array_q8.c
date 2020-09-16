/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program which performs the following tasks:
    - initialize an integer array of 10 elements in main()
    - pass the entire array to a function modify()
    - in modify() multiply each element by 3.
    - return control to main() and print the new array elements int main().
*/

//Solution

#include<stdio.h>

void modify(int *p);
int main(void)
{
    int arr[10] = {1, 2, 3, 4, 50, 6, 7, 8, 9, 0};
    int *ptr;
    ptr = arr;
    modify(ptr);
    for (int i = 0; i < 10;i++)
        printf("%d ", arr[i]);
    return 0;
}
void modify(int *p)
{
    for (int i = 0; i < 10;i++)
    {
        *p = *p * 3;
        p++;
    }
}
