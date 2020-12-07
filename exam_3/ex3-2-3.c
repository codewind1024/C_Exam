#include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    b=a+b+c;
    c=b-a-c;
    a=b-a-c;
    b=b-a-c;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
}