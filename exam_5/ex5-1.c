#include <stdio.h>
int main()
{
    int m, n, j, k;
    do
    {
        printf("input m n :"), scanf("%d%d", &m, &n), j = m;

    } while (m < 0 || n < 0);

    while (j % n != 0)
        j = j + m;

    k = (m * n) / j;

    printf("最小公倍数%d\n最大公约数%d\n", j, k);

    getchar();
    getchar();
    return 0;
}