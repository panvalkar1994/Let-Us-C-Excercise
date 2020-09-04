/*Access string using pointer*/
#include<stdio.h>

int main(void)
{
    char name[] = "Klinsman";
    char *ptr;
    ptr = name;//Assining pointer to starting of string
    while (*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}