#include <stdio.h>
void main()
{
    int z=12345;
    float x=213.82631;
    float y=213.82631;
    printf("%10d\n%-10d\n",z,z);
    printf("%-4.2f\n%10.1e\n",x,y);
    //y输出的值和实际存储的值不一样
    

}