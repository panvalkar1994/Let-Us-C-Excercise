/*Standard Library String Functions*/
/*strlen(): It counts the number of charcters present in a string*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr[] = "Bamboozled";
    int len1, len2;
    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");
    printf("string=%s lenght=%d\n", arr, len1);
    printf("string=%s length=%d\n", "Humpty Dumpty", len2);
    return 0;
}