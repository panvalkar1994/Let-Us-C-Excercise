/*Program to demonstrate printing of a string*/
#include<stdio.h>

int main(void)
{
    char name[] = "Klinsman";
    int i = 0;
    while(i<=7)
    {
        printf("%c", name[i]);
        i++;
    }
    return 0;
}