#include <stdio.h>
void main()
{
    int a,b,x,y;
    a=10;
    b=20;
    x=a++;
    printf("a=%d,x=%d\n",a,x);
    y=++b;
    printf("b=%d,y=%d\n",b,y);
    x=a--;
    printf("a=%d,x=%d\n",a,x);
    y=--b;
    printf("b=%d,y=%d\n",b,y);
    printf("10%%20=%d,20%%10=%d\n",10%20,20%10);
    
}