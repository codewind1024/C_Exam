#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("请输入整数个数:");
    scanf("%d", &n);
    printf("请输入%d个正整数\n", n);
    for (j = 1; j <= n; j++)
    {
        scanf("%d", &m);
        for (i = 2; i < m; i++)
            if (m % i == 0 || m == 2)
                break;
        if (i >= m)
            printf("%d是一个素数\n", m);
        else
            printf("%d不是一个素数\n", m);
    }

    return 0;
}
