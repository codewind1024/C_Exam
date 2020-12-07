#include <stdio.h>
int main()
{
    int i, j = 0;
    for (i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d  ", i);
            j++;
        }

        if (j % 10 == 0)
            printf("\n");
    }

    return 0;
}