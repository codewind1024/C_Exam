#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char c, c_array[80];
    printf("����һ���ַ�:");
    c = getchar();
    printf("����һ���ַ���:");
    scanf("%s", c_array);
    // for (i = 0; (c_array[i] = getchar()) != '\n'; i++);
    for (i = 0, j = 0; i < strlen(c_array); i++)
    {
        if (c_array[i] == c)
        {
            j++;
        }
    }
    printf("���ַ�������%c��ͬ���ַ���%d��", c, j);

    return 0;
}