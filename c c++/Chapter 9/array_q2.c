/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Implement the selection sort, Bubble sort and Insertion sort algorithms on a set of 25 numbers.
*/

//Solution:
#include<stdio.h>
//uncomment the method of sorting You want. (Only one method should be used.)
#define SELECTION_SORT
//#define BUBBLE_SORT
//#define INSERTION_SORT

int main(void)
{
    int arr[25] = {25, 24, 23, 22, 21, 20,
                   19, 18, 17, 16, 15, 14,
                   13, 12, 11, 10, 9, 8, 7,
                   6, 5, 4, 3, 2, 1};
    printf("Array:Before\n");
    for (int i = 0; i < 25;i++)
        printf("%d ", arr[i]);
    //Selection Sort
#ifdef SELECTION_SORT
    for (int i = 0; i < 25;i++)
    {
        int temp = arr[i];
        for (int j = i; j < 25;j++)
        {
            if (temp>=arr[j])
            {
                arr[i] = arr[j];
                arr[j] = temp;
                temp = arr[i];
            }
        }
    }
    printf("\nAfter Selection Sort\n");
    for (int i = 0; i < 25;i++)
        printf("%d ", arr[i]);
#endif
    //Bubble Sort
#ifdef BUBBLE_SORT
    for (int i =1; i <= 25;i++)
    {
        int temp;
        for (int j = 0; j < 25 - i;j++)
        {
            if (arr[j]>=arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nAfter Bubble Sort: \n");
    for (int i = 0; i < 25;i++)
        printf("%d ", arr[i]);
#endif

    //Insertion sort
#ifdef INSERTION_SORT
//Need to define it.
#endif
    return 0;
}