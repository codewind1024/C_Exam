#include <stdio.h>
int main()
{
    int t=0;
    for (int i = 1;i<=200 ; i++)
    {
        for (int j = 1; j <i; j++)
        {
            if(i%j==0)
            {
                t=t+j;
            }

        }
        if (i==t)
        {
            printf("prefect number:%d\n",i);
        }
        t=0;
    }

    return 0;
}