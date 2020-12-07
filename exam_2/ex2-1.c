#include <stdio.h>
#include <math.h>
int main(){
    float d=300000;
    float p=6000;
    float r=0.01;
    float m=log(p/(p-d*r))/log(1+r);
    printf("还清月数:%.0f\n",m);
    return 0;
    
}