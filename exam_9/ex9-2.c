#include <stdio.h>

int prime(int m)
{
    for (int l = 2; l < m - 1; l++)
        if (m % l == 0)
            return 0;
    return 1;
}
int main()
{
    int i, j, k, n = 0, n1 = 0;
    for (i = 4; i <= 100; i = i + 2)
    {
        n++;
        for (j = i; j > 0; j--)
        {
            k = i - j;
            if (prime(j) && prime(k))
            {
                n1++;
                printf("%d+%d=%d\n", k, j, k + j);
                break;
            }
        }
    }
    if (n == n1)
    {
        printf("yes");
    }

    return 0;
}