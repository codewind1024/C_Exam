#include <stdio.h>
int main()
{
    int i, j, n, x, a[1000];
    printf("�������ݸ���n:");
    scanf("%d", &n);
    printf("����%d������:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("����Ҫ�������");
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