#include <stdio.h>

int main()
{
    int i, j, k = 3, l;
    for (i = 1; i <= 7; i += 2)
    {
        for (l = 1; l <= k; l++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        k--;
        printf("\n");
    }

    for (i = 5; i >= 1; i -= 2)
    {
        for (k = 1; k <= l; k++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        l++;
    }

    return 0;
}