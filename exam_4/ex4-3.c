#include <stdio.h>
int main()
{
    int x, y, c;
    while (1)
    {
        scanf("%d", &x);
        if (x < 1)
        {
            y = x;
        }
        else if (x < 10)
        {
            c = 0;
        }
        else
        {
            c = 1;
        }
        switch (c)
        {
        case 0:
            y = 2 * x - 1;
            break;
        case 1:
            y = 3 * x - 1;
            break;
        }

        printf("y=%d", y);
    }

    return 0;
}