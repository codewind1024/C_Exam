#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char array[10][20],tmp[20];
    printf("输入十个单词：\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; (array[i][j] = getchar()) != '\n'; j++)
            ;
        array[i][j] = '\0';
    }

    for (i = 10; i > 0; i--)
    {
        for (j = 0; j < i-1; j++)
        {
            if (strcmp(array[j], array[j + 1])>0)
            {
                strcpy(tmp,array[j]);
                strcpy(array[j],array[j+1]);
                strcpy(array[j+1],tmp);
            }
        }
    }

    

    for (i = 0; i < 10; i++)
    {
        printf("%2s",array[i]);
    }
    return 0;
}