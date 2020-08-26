/*Solving problems from "Let Us C", Chapter 6,Functions & Pointers*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a function that recives 5 integers and returns the sum, average and standard deviation of these numbers. Call function from main() and print the results in main().
*/

//Solution:
#include<stdio.h>
#include<math.h>

float total(int n1, int n2, int n3, int n4, int n5);
float average(int total);
float stddev(int n1, int n2, int n3, int n4, int n5, float average);

int main(void)
{
    int n1, n2, n3, n4, n5;
    float tot, avg, std;

    printf("Enter marks of 5 subjects: \n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    tot = total(n1, n2, n3, n4, n5);
    avg = average(tot);
    std = stddev(n1, n2, n3, n4, n5, avg);

    printf("Total marks=%.f\n", tot);
    printf("Average marks=%.f\n", avg);
    printf("Standard Deviation=%f", std);

}

float total(int n1,int n2, int n3,int n4,int n5)
{
    return (n1 + n2 + n3 + n4 + n5);
}

float average(int total)
{
    return total / 5;
}

float stddev(int n1,int n2, int n3,int n4,int n5,float average)
{
    float var;
    var = powf(n1 - average, 2) + powf(n2 - average, 2) + powf(n3 - average, 2) + powf(n4 - average, 2) + powf(n5 - average, 2);
    return sqrtf(var);
}
