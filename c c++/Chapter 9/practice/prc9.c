/*Chapter 9: Arrays, Example 9 */
//Usage of pointer to an array
#include<stdio.h>

int main(void)
{
    int s[4][2]={
                    {1234,56},
                    {1212,33},
                    {1434,80},
                    {1312,78}
                };
    int(*p)[2];//Pointer p to 1-D array of size 2
    int i, j, *pint;
    for (i = 0; i < 4;i++)
    {
        p = &s[i];
        pint = (int *)p;
        printf("\n");
        for (j = 0; j < 2;j++)
            printf("%d ", *(pint + j));
    }
    return 0;
}