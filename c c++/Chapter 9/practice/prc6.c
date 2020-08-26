/*Chapter 9: Arrays, Example 6 */
//Demonstrating Pointer arithmatics

#include<stdio.h>

int main(void)
{
    int i = 4, *j, *k;
    j = &i;
    printf("Location 1 of j=%u\n", j);
    j = j + 1;
    printf("Location 2 of j=%u\n", j);
    j = j + 9;
    printf("Location 3 of j=%u\n", j);
    k = j + 3;
    printf("Location 4 of j=%u\n", k);
}