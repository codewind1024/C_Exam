#include <stdio.h>
#include <string.h>
int main()
{
    char c_array[80];
    int i,j;
    printf("����һ���ַ���:");
    gets(c_array);
    for (i = 0,j=strlen(c_array)-1; i < j; i++,j--)
    {
        if (c_array[i]==c_array[j])
        continue;
        break;
    }
    if (i>=j)
    {
        printf("%s�ǻ���\n",c_array);
    }else
    {
        printf("%s���ǻ���\n",c_array);
    }

    return 0;
}