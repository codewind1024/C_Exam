#include <stdio.h>
int main()
{
    int grade = 0, max = 0;

    while (grade >= 0)
    {
        scanf("%d",&grade);
        if (grade > max)
        {
            max = grade;
        }
    }
    printf("max:%d", max);

    return 0;
}