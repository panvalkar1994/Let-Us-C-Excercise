/*Chapter 9: Arrays, Practice example 4*/
//Passing array elemets to function by refrence

/*Demonstration of call by reference*/
#include<stdio.h>

void show(int **n);
void disp(int *m);
int main(void)
{
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};
    for (i = 0; i <7; i++)
    {
        disp(&marks[i]);
    }
    return 0;
}

void disp(int *m)
{
   show(&m);
}

void show(int **n)
{
    printf("%d ", **n);
}