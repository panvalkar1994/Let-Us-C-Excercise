/*Printing string character by character using while loop.*/
#include<stdio.h>

int main(void)
{
    char name[] = "Klinsman";
    int i = 0;
    while (name[i]!='\0')
    {
        printf("%c", name[i]);
        i++;
    }
    return 0;
}