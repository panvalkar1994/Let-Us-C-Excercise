/* Calculation of Simple Interest */
/* Author: Vaibhav Panvalkar */
/* Date: 28/07/2020 */

#include <stdio.h>

int main()
{
    int p,n;
    float r, si;

    printf("Enter values of p,n,r \n");
    scanf("%d %d %f",&p,&n,&r);
    
    /* Formula for simple interest */
    si=p*n*r/100;
    printf("%f\n",si);
    return 0;
}