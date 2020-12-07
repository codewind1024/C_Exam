#include <stdio.h>
void main()
{
    int a,b;
    double c;
    scanf("%d,%d",&a,&b);
    printf("a=%f,b=%f\n",a,b);
    c=a/b;
    printf("c=%f\n",c);
    c=(double)a/b;
    printf("c=%f\n",c);
}