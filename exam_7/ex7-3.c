#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, t, max, min;
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

    for (i = sizeof(a) / sizeof(a[0]); i > 0; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (fabs(a[j]) > fabs(a[j + 1]))
                ;
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}