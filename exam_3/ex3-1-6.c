#include <stdio.h>
void main()
{
    int a,x,y;
    x=(a=3,3*6);
    y=a=2.2*a;
    printf("x=%d,y=%d\n",x,y);

}