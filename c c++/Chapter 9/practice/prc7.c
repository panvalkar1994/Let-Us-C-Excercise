/*Chapter 9: Arrays, Example 7 */
//Demonstrating 2D arrays
#include<stdio.h>

int main(void)
{
    int s[4][2]={
        {1234,56},
        {1212,33},
        {1434,80},
        {1312,78}
    };
    for (int i = 0; i < 4;i++)
        printf("Address of %d th 1-D array=%u\n", i, s[i]);
    return 0;
}