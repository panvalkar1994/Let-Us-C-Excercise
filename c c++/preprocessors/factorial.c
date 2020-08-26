#include<stdio.h>
#include".\fact.h"

int main(void)
{
    int n = 5, factorial;
    factorial = fact(n);
    printf("%d", factorial);
}