#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d;
    printf("请输入一元二次方程 a ，b，c");
    scanf("%lf%lf%lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("a=b=c=0");
            else
                printf("a=b=0");
        }
        else
        {
            printf("x=%0.2lf\n", -c / b);
        }
    }
    else
    {
        if (d >= 0)
        {
            printf("x1=%0.2f\nx2=%0.2f\n", ((-b) + sqrt(d)) / 2 * a, ((-b) - sqrt(d)) / 2 * a);
        }
        else if (d < 1e-20)
        {
            printf("null");
        }

        {
        }
    }
    getchar();
    getchar();
    return 0;
}