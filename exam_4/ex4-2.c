#include <stdio.h>
int main()
{
    char i1,i2,i3,i4;

    scanf("%d%d%d%d", &i1,&i2,&i3,&i4);
    
    char max = i1;
    if (max < i2)
    {
        max = i2;
    }
    if (max < i3)
    {
        max = i3;
    }
    if (max < i4)
    {
        max = i4;
    }
    printf("%d", max);
    getchar();
    getchar();

    return 0;
}