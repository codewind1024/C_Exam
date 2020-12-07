#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char c, c_array[80];
    printf("输入一个字符:");
    c = getchar();
    printf("输入一个字符串:");
    scanf("%s", c_array);
    // for (i = 0; (c_array[i] = getchar()) != '\n'; i++);
    for (i = 0, j = 0; i < strlen(c_array); i++)
    {
        if (c_array[i] == c)
        {
            j++;
        }
    }
    printf("在字符串中与%c相同的字符有%d个", c, j);

    return 0;
}