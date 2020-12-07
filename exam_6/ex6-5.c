#include <stdio.h>

int main ()
{
    double n1=1.0,n2=1.0,t=0.0,u=0.0;

     for (int i = 0; i < 10; i++)
    {
        n1=n1+n2;
        u=t+n1/n2;
       // printf("%.0f/%.0f\n",n1,n2);
        n2=n1+n2;
        t=t+n2/n1;
       // printf("%.0f/%.0f\n",n2,n1);

        //printf("%lf\n%lf\n",n1,n2);
    } 
    printf("%lf",t+u);
    return 0;
}