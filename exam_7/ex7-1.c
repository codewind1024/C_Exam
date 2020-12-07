#include <stdio.h>
int main()
{
    int i, j, n, x, a[1000];
    printf("输入数据个数n:");
    scanf("%d", &n);
    printf("输入%d个整数:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("输入要插入的数");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (x > a[i])
            continue;
        j = n - 1;

        while (j >= i)
        {
            a[j+1] = a[j];
            j--;
        }
        a[i] = x;
        break;
    }

    for (i = 0; i < n+1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}