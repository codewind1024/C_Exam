#include <stdio.h>
int main()
{
    int count = 0;
    for (int i = 101; i <= 115; i++)
    {
        if (i % 3 == 0)
            continue;
        printf("%d  ", i);
        count++;
        if (count % 5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}