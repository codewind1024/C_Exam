#include <stdio.h>
int main()
{
    int i, k, tmp;
    char str[100];
    printf("input a string:");
    i = 0;
    while ((str[i] = getchar()) != '\n')
        i++;                                                    
    str[i]='\0';
    k=i-1;
    for (i = 0; i < k; i++)
    {
        tmp=str[i];
        str[i]=str[k];
        str[k]=tmp;
        k--;
    }
    for ( i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }

    return 0;
}