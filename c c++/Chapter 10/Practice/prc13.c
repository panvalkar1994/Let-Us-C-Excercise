//String concatenate function demonstration
#include<stdio.h>
#include<string.h>

int main(void)
{
    char source[] = "Folks";
    char target[30] = "Hello ";
    strcat(target, source);
    printf("source: %s\n", source);
    printf("target: %s\n", target);
    return 0;
}
