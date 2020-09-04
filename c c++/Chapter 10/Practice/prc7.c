/*Pointer to string*/
#include<stdio.h>

int main(void)
{
    char str1[] = "Hello";
    char str2[10];
    char *s = "Good Morning";
    char *q;
    //str2 = str1; is not valid; assignment of expression to array is illigal
    q = s;/*Works*/
    printf("%s", q);
    return 0;
}