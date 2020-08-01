/*Eamples from "Let US C", chapter 3*/
/*Author: Vaibhav Panvalkar */
/*
In this example I will explore how to add nested if-else code blocks.
It can be easily understood that the code blocks are complicated for this simple program.

*/

//Problem statment:
/*
The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per following rules:
    Percentage above or equal to 60-First division
    Percentage between 50 and 59-Second division
    Percentage between 40 and 49- Third division
    Percentage less than 40-Fail
Write a program to calculate division obtained by the student.
*/

//Solution:
#include<stdio.h>

int main()
{
    /*Create variables to store marks and percentages of the student*/
    int m1, m2, m3, m4, m5;//marks in different subjects
    float per;//Percentage marks
    /*Take marks input from user*/
    printf("Please enter marks obtained in 5 subjects: \n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    /*Calculate percentage marks obatained*/
    per = (m1 + m2 + m3 + m4 + m5) / 500.0 * 100;
    printf("Percentage marks:%f \n", per);
    /*Classification into divisions*/
    if (per>=60)
    {
        printf("First Division obtained by the student");
    }
    else
    {
        if(per>=50)
        {
            printf("Second Division Obatined");
        }
        else
        {
            if (per>=40)
            {
                printf("Third Division");
            }
            else
            {
                printf("Fail");
            }
            
        }
        
    }
    

    return 0;
}