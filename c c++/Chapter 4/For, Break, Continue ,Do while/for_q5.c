/*Solving problems from "Let Us C", Chapter 4,for loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
A machine is purchased which will produce earnings of Rs. 1000 per year while it lasts. The machine costs Rs.6000 and will have a salvage value of Rs. 2000 when it is condemned. If 9 percent per annum can be earned on alternate investments, write a program to determine what will be the minimum life of the machine to make it a more attractive investment compared to alternative investment?
*/ 

//Solution
#include<stdio.h>

int main(void)
{
    /*Create variables*/
    int age=0, profit1,profit2, cost=6000, salvage=2000;
    /*Calculate*/
    //Machine 1
    profit1 = 1000 * age - cost + salvage;
    profit2 = cost * 0.09;
    while (profit2>=profit1)
    {
        age += 1;
        profit1 = 1000 * age - cost + salvage;
        profit2 = cost * 0.09*age;
    printf("profit on investment 1 on %d year is %d\n", age, profit1);
    printf("profit on investment 2 on %d year is %d\n\n\n", age, profit2);
    }
    printf("Minimum life of machine 1 should be %d years", age);

}