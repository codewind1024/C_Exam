#include <stdio.h>
int main()
{
    int n, m, i, j, ii=0, jj=0, min;
    do
    {
        printf("�����������к����� n m\n");
        scanf("%d%d", &n, &m);
    } while (n > 4 || m > 4);

    int array[n][m];
    printf("������%d��%d�е�����Ԫ��\n", n, m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    min = array[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (array[i][j] < min)
            {
                min = array[i][j];
                ii=i;
                jj=j;
            }
        }
    }

    printf("array[%d][%d]=%d",ii,jj,min);

    return 0;
}