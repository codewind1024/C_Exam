#include <stdio.h>
int main()
{
    int p = 1;
    for (int i = 1; i <= 9; i++)
        p = (p + 1) * 2;
    printf("第一天吃了%d个桃子\n", p);
    return 0;
}