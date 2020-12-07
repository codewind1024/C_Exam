#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, sc = 0, lc = 0, nc = 0, kc = 0, oc = 0;
    do
    {
        printf("ÊäÈë×Ö·û´®ĞĞÊı£º");
        scanf("%d", &n);
    } while (n > 5 || n < 0);

    printf("ÊäÈë%dĞĞ×Ö·û´®\n", n);
    char array[n][80];
    getchar();
    for (i = 0; i < n; i++)
    {
        for (j = 0; (array[i][j] = getchar()) != '\n'; j++)
            ;
        array[i][j] = '\0';
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < strlen(array[i]); j++)
        {
            if (array[i][j] == ' ')
            {
                kc++;
            }
            else if (array[i][j] >= '0' && array[i][j] <= '9')
            {
                nc++;
            }
            else if (array[i][j] >= 65 && array[i][j] <= 90)
            {
                lc++;
            }
            else if (array[i][j] >= 97 && array[i][j] <= 122)
            {
                sc++;
            }
            else
            {
                oc++;
            }
        }
        
    }

    printf("´óĞ´×ÖÄ¸£º%d\nĞ¡Ğ´×ÖÄ¸£º%d\nÊı×Ö×Ö·ûÊı£º%d\n¿Õ¸ñ×Ö·ûÊı£º%d\nÆäËû×Ö·ûÊı:%d\n", lc, sc, nc, kc, oc);

    return 0;
}