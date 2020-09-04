/*Standard Library String Functions*/
/*xstrlen(): User defined function which takes string not it's copy*/
#include<stdio.h>

int xstrlen(char *ptr);
int main(void)
{
    char arr[] = "Bamboozled";
    int len1;
    len1 = xstrlen(arr);
    printf("string=%s length=%d", arr, len1);
    return 0;
}

int xstrlen(char *ptr)
{
    int len = 0;
    while(*ptr!='\0')
    {
        ptr++;
        len++;
    }
    return len;
}