/*Standard Library String Functions*/
/*strcpy():This function copies the content of one string into another. The base addresses of the source and target strings should be supplied to this function.*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    char source[] = "Sayonara";
    char target[20];
    strcpy(target, source);
    printf("Source string=%s\n", source);
    printf("Target string=%s\n", target);
    return 0;
}