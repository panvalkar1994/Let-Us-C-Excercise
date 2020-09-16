/*Modifying scanf to recieve multiword strings*/
#include<stdio.h>

int main(void)
{
    char name[25];
    printf("Enter Name: \n");
    scanf("%[^\n]s", name);
    printf("Hello, %s!", name);
    return 0;
}