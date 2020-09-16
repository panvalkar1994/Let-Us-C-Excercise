/*Understanding pointers*/

#include<stdio.h>

int main(void)
{
    int i = 3;
    int *j;
    j = &i;
    //Using i only
    printf("In terms of i only:\n");
    printf("Address of i=%u\n", &i);
    printf("Value of i=%d\n", i);
    printf("Value of i=%d\n", *&i);

    //Using j only
    printf("In terms of j:\n");
    printf("Address of j=%u\n", &j);
    printf("Address of i in terms of j=%u\n", j);
    printf("Value at j or value of i in terms of j=%d\n", *j);
    return 0;
}