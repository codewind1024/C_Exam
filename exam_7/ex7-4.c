#include <stdio.h>
int main()
{
    int x ,i, k=0,r;
    int b[100];
    printf("input x(十进制)\n");
    scanf("%d",&x);
    do
    {
        r=x%2;
        b[k++]=r;
        x/=2;

    } while (x);
    printf("output b(二进制)\n");
    for ( i = k-1; i >=0; i--)
    {
        printf("%d",b[i]);
    }
    
    



    return 0;
}