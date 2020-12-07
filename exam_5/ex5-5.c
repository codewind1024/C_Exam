#include <stdio.h>
int main()
{
    char c;
    int letter=0, lower=0, capital=0, space=0, digital=0, other=0;
    while (c = getchar() != '\n')
    {
        if (c >= 'A' && c <= 'z')
        {
            letter++;
        }
        if (c >= 'a' && c <= 'z')
        {
            lower++;
        }
        if (c = ' ')
        {
            space++;
        }
        if (c >= 0 && c <= 9)
        {
            digital++;
        }

        other++;
    }
    capital = letter - lower;
    printf("letter:%d\ncapital:%d\nlower:%d\nspace:%d\ndigital:%d\nother:%d\n", letter, capital, lower, space, digital, other);

    return 0;
}