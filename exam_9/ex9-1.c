#include <stdio.h>
int prime(int n)
{
    int i;
    for (i = 2; i < n - 1; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int m;
    char ch;
    do
    {
        printf("\nInput a number.\n");
        scanf("%d", &m);
        printf("%d is %s prime.\n", m, (prime(m)) ? "" : "not");
        ch=getchar();
    } while (ch == 'Y' || ch == 'y');

    return 0;
}