/*Solving Problems from "Let US C", chapter 2*/
/*Author: Vaibhav Panvalkar */
/*
Solving complicated logic using logical operators.
*/

//Problem statment:
/*
A company insures its drivers in the following cases:
    - If the driver is married.
    - If the driver is unmarried, male and above 30 years of age.
    - If the driver is unmarried, female and above 25 years of age.
*/
// Solution:

#include<stdio.h>

int main()
{
    /*Create variables to store data of driver.*/
    char sex, ms;//sex-Gender(M/F) and ms-marital status(M/U)
    int age;
    /*Take information from user*/
    printf("Please enter your age, sex(M/F),marital status(M/U): \n");
    scanf("%d %c %c", &age, &sex, &ms);
    /*Classify into insured or not*/
    if ((ms=='M')||(sex=='M' && age>=30)||(sex='F' && age>=25))
        printf("Driver is Insured\n");
    else
        printf("Driver is 'not Insured'\n");
    return 0;
}