#include <stdio.h>
int main()
{
    int month, year;
    printf("please input year.month:"); 
    while (1)
    {
        scanf("%d.%d", &year, &month);
        if (month <= 0 || month > 12 || year < 0)
        {
            printf("please input correct data:");
            
        }else
        {
            break;
        }
        
    }

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d.%d: 31 days", year, month);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d.%d 30 days", year, month);
        break;
    case 2:
        if ((year % 4 == 0 && year % 1 != 0) || (year % 400 == 0))
        {
            printf("%d.2 29 days", year);
        }
        else
        {
            printf("%d.2 28 days", year);
        }
        break;
    }

    getchar();
    getchar();
    return 0;
}