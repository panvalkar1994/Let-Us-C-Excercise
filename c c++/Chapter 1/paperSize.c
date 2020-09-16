/*Solving Problems from "Let US C", chapter1*/
/*Author: Vaibhav Panvalkar */

// Problem Statement
/*
Paper of size A0 has dimensions 1189mm x 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to to its shorter sides. Write a program to calculate and print paper sizes A0,A1...A8.
*/

//Solution:


#include<stdio.h>

int main()
{
    /* Create variables to store size of paper*/
    /*to store lengths*/
    int l0, l1, l2, l3, l4, l5, l6, l7, l8;
    /*breadth*/
    int b0, b1, b2, b3, b4, b5, b6, b7, b8;
    /*Store value of A0*/
    l0 = 1189;
    b0 = 841;
    printf("A0 size: %d mm x %d mm\n", l0, b0);
    /*Calculate and store A1*/
    l1 = b0;//As half A0 length is less than its breadth
    b1 = l0 / 2;
    printf("A1 size: %d mm x %d mm\n", l1, b1);
    /*Calculate and Store A2*/
    l2 = b1;
    b2 = l1 / 2;
    printf("A2 size: %d mm x %d mm\n", l2, b2);
    /*Calculate and Store A3*/
    l3 = b2;
    b3 = l2 / 2;
    printf("A3 size: %d mm x %d mm\n", l3, b3);
    /*Calculate and Store A4*/
    l4 = b3;
    b4 = l3 / 2;
    printf("A4 size: %d mm x %d mm\n", l4, b4);
    /*Calculate and Store A5*/
    l5 = b4;
    b5 = l4 / 2;
    printf("A5 size: %d mm x %d mm\n", l5, b5);
    /*Calculate and Store A6*/
    l6 = b5;
    b6 = l5 / 2;
    printf("A6 size: %d mm x %d mm\n", l6, b6);
    /*Calculate and Store A7*/
    l7 = b6;
    b7 = l6 / 2;
    printf("A7 size: %d mm x %d mm\n", l7, b7);   
    /*Calculate and Store A8*/
    l8 = b7;
    b8 = l7 / 2;
    printf("A8 size: %d mm x %d mm\n", l8, b8);
    return 0;
}