#include <stdio.h>
#include <string.h>
int main()
{
    char c_array[80];
    int i,j;
    printf("输入一个字符串:");
    gets(c_array);
    for (i = 0,j=strlen(c_array)-1; i < j; i++,j--)
    {
        if (c_array[i]==c_array[j])
        continue;
        break;
    }
    if (i>=j)
    {
        printf("%s是回文\n",c_array);
    }else
    {
        printf("%s不是回文\n",c_array);
    }

    return 0;
}