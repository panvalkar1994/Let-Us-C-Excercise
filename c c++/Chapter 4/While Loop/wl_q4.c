/*Solving problems from "Let Us C", Chapter 4,While loop*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.
*/

//Solution:
int main(void)
{
    /*Create variables to store value*/
    int i=0;
    while (i<256)
    {
        printf("ASCII value   %d    corresponds to charcter %c \n", i, i);
        i++;
    }
    
}