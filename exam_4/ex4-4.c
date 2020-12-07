#include <stdio.h>
int main()
{
    int score,temp;
    scanf("%d", &score);
    temp=score;
    int level;
    if (score/10<6)
    {
        score=1;
    }else if (score/10>=9)
    {
        score=10;
    }    
    switch (score / 10)
    {
    case 0:
        printf("%d:E", temp);
        break;
    case 1:
        printf("%d:A", temp);
        break;
    case 6:
        printf("%d:D", temp);
        break;
    case 7:
        printf("%d:C", temp);
        break;
    case 8:
        printf("%d:B",temp);
        break;
    }
    getchar();
    getchar();

    return 0;
}