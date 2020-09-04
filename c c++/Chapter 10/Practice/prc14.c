//User defined string concatenation function
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void xstrcat(char tgt[], char src[]);
int main(void)
{
    char source[] = "Folks";
    char target[30] = "Hello";
    xstrcat(target, source);
    printf("source: %s\n", source);
    printf("target: %s\n", target);
    return 0;
}

void xstrcat(char tgt[], char src[])
{
    int src_len = strlen(src);
    int tgt_len = strlen(tgt);
    int n = src_len + tgt_len + 1;
    for (int i = 0; i <=n; i++)
    {
        if (i<tgt_len)
            tgt[i] = tgt[i];
        else if(i<n)
        {
            tgt[i] = src[i - src_len];
        }
        else
        {
            tgt[i] = '\0';
        }
        
    }
    
    
}