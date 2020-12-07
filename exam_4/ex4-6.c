#include <stdio.h>
int main()
{
    int a, b;
    char sign;
    printf("please input a opreate b :");
    scanf("%d%c%d", &a, &sign, &b);
    switch (sign)
    {
    case '*':
        printf("%d*%d=%d", a, b, a * b);
        break;
    case '/':
        printf("%d/%d=%d", a, b, a / b);
        break;
    case 'M':
    case 'm':
        printf("%d mod %d=%d", a, b, a-a/b*b);
        break;
    default:
        break;
    }

    getchar();
    getchar();
    return 0;
}