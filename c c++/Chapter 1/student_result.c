/*Solving Problems from "Let Us C", Chapter1*/
/* Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
If the marks obtained by a student in five different subjects are input through the keyboard,
write the program to find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100.
*/
//Solution:

#include <stdio.h>

int main()
{
    /* Creating subjects variable s1,s1...s5*/
    float s1,s2,s3,s4,s5;
    float percent,avg;
    /* Scan marks obtained by the student */
    printf("Please enter marks obtained in Subject s1: \n");
    scanf("%f",&s1);
    printf("Please enter marks obtained in Subject s2: \n");
    scanf("%f",&s2);
    printf("Please enter marks obtained in Subject s3: \n");
    scanf("%f",&s3);
    printf("Please enter marks obtained in Subject s4: \n");
    scanf("%f",&s4);
    printf("Please enter marks obtained in Subject s5: \n");
    scanf("%f",&s5);
    /* Formula to calculate Avg, % from given marks */
    percent=((s1+s2+s3+s4+s5)/500)*100;
    avg=(s1+s2+s3+s4+s5)/5;
    /* Print percentage and average */
    printf("Percentage marks obtained: %f\n",percent);
    printf("Aggregate marks obtained: %f",avg);
    return 0;
}
