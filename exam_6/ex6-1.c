#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("��������������:");
    scanf("%d", &n);
    printf("������%d��������\n", n);
    for (j = 1; j <= n; j++)
    {
        scanf("%d", &m);
        for (i = 2; i < m; i++)
            if (m % i == 0 || m == 2)
                break;
        if (i >= m)
            printf("%d��һ������\n", m);
        else
            printf("%d����һ������\n", m);
    }

    return 0;
}
