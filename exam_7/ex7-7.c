#include <stdio.h>
int main()
{
    int i, j;
    int triangle[6][6] = {0};

    for (i = 0; i < 6; i++)
        for (j = 0; j < 6; j++)
        {
            triangle[j][0] = triangle[j][j] = 1;

            if (j > 0 && i > 0)
                triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
        }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (triangle[i][j] == 0)
                continue;
            printf("%2d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}