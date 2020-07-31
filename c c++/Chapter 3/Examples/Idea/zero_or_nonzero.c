/*Small matters*/
/*Author: Vaibhav Panvalkar*/

/* Run the following  C program*/
/*The ouputs will clearify that if statement gets triggered positive if it gets condtion anything non-zero*/
#include<stdio.h>

int main()
{
    int a=0;
    float b=0.0;
    char c;
        /*Testing for Character condition*/
    printf("Please enter a charcter: \n");
    scanf("%c", &c);
    if (c)
        printf("Character entered %c sets conditional true.\n", c);

    /*Testing if for integers*/
    printf("Please enter any interger: \n");
    scanf("%d", &a);
    if (a)
        printf("Given integer %d sets 'If Conditional statement' true\n", a);

    /*Testing if for float*/
    printf("Please enter any real number: \n");
    scanf("%f", &b);
    if (b)
        printf("Given real %f sets 'If Conditional statement' true\n", b);
    return 0;
}