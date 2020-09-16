/*Pointer to string*/
#include<stdio.h>

int main(void)
{
    char str1[] = "Hello";
    char *p = "Hello";
    //str1 = "Bye"; is not valid
    p = "Bye";//Valid
    printf("%s", p);
    return 0;
}