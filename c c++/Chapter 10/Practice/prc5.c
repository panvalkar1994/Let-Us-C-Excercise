/*Scanf does not work with multi words string so use gets() and puts()*/
#include<stdio.h>

int main(void)
{
    char name[25];
    printf("Enter Name: \n");
    gets(name);
    puts("Hello");
    puts(name);
    return 0;
}