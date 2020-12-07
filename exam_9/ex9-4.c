#include <stdio.h>

int main()
{
    double x, root;
    int n;
    printf("Input x,n:");
    scanf("%lf%d", &x, &n);
    root = fun(n, x);
    printf("root=%lf\n", root);

    return 0;
}

double fun(int n, double x)
{
    if (n == 1)
    {
        return x;
    }
    else
    {
        return x * fun(n - 1, x);
    }
}