#include <stdio.h>
#include <string.h>
int main()
{
    char c1[80], c2[80], c3[160];
    int i, j;
    printf("ÊäÈë×Ö·û´®1:");
    scanf("%s", c1);
    printf("ÊäÈë×Ö·û´®2:");
    scanf("%s", c2);
    for (i = 0; i < strlen(c1); i++)
        c3[i] = c1[i];
    for (j = 0; j < strlen(c2); i++, j++)
        c3[i] = c2[j];
    c3[i]='\0';
    // printf("×Ö·û´®3:%s",c3);
    //puts(c3);
    for (i = 0; i < strlen(c3); i++)
    {
        putchar(c3[i]);
    }

    return 0;
}