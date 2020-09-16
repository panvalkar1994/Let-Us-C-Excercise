/*Chapter 9: Arrays, Practice example 2*/
/*Passing Array elements to a function*/
/*Demonstration of call by value*/
#include<stdio.h>

void display(int);

int main()
{
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};
    for (i = 0; i <7; i++)
    {
        display(marks[i]);
    }
    return 0;
}
void display(int m)
{
    printf("%d ", m);
}