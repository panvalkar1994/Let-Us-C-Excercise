/*Chapter 9: Arrays, Practice example 3*/
//Passing array elemets to function by refrence

/*Demonstration of call by reference*/
#include<stdio.h>

void display(int *m);
int main(void)
{
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};
    for (i = 0; i <7; i++)
    {
        display(&marks[i]);
    }
    return 0;
}

void display(int *m)
{
    printf("%d ", *m);
}