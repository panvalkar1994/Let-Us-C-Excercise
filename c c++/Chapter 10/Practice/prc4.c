/*Using %s to recieve input*/
#include<stdio.h>

int main(void)
{
    char name[25];
    printf("Enter Your name: \n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}

//Conclusion:
/*
Though %s can take a string as input when a null charcter is entered scanf assumes that the input is over, so output of the above program will be as follow:
if you entered : Vaibhav Panvalkar
the output will be : Hello, Vaibhav!
*/