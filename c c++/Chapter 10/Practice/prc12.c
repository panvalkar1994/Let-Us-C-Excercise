/*Standard Library String Functions*/
/*xstrcpy(): User defined string copy function which takes pointers*/
#include<stdio.h>

void xstrcpy(char *target,const char *source);
int main(void)
{
    char source[] = "Sayonara";
    char target[20];
    xstrcpy(target,source);
    printf("Source string=%s\n", source);
    printf("Target string=%s\n", target);
    return 0;
}

void xstrcpy(char *target,const char *source)
{
    while (*source!='\0')
    {
        *target = *source;
        target++;
        source++;
    }
    *target = '\0';
}