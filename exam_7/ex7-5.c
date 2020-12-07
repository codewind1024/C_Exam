#include <stdio.h>
int main()
{
    int n, i, j;
    int array[10];
    int temp[10];
    do
    {
        printf("输入n个正整数(1 < n <=10)\n");
        scanf("%d", &n);
    } while (n <= 1 || n > 10);

    printf("输入%d个正整数\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (i = n - 1, j = 0; i >= 0; i--, j++)
    {
        temp[j] = array[i];
    }

    for (i = 0; i < n; i++)
    {
        array[i] = temp[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    
    return 0;
}