#include <stdio.h>
int main()
{
    int n, i, j = 0, t, max, min;
    do
    {
        printf("输入n个正整数(1 < n <= 10):");
        scanf("%d", &n);
    } while (n <= 1 || n > 10);

    int a[n];

    printf("输入%d个正整数\n", n);
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (max < a[i])
        {
            max = a[i];
            j = i;
        }
    }

    t = a[j];
    a[j] = a[sizeof(a) / sizeof(a[0]) - 1];
    a[sizeof(a) / sizeof(a[0]) - 1] = t;

    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (min >= a[i])
        {
            min = a[i];
            j = i;
        }
    }

    t = a[j];
    a[j] = a[0];
    a[0] = t;

    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}