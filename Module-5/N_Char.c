#include <stdio.h>

int main()
{
    char alpha;

    scanf("%c", &alpha);
    if (alpha >= 'a' && alpha <= 'z')
    {
        alpha = alpha - 32;
        printf("%c\n", alpha);
    }
    else
    {
        alpha = alpha + 32;
        printf("%c\n", alpha);
    }
    return 0;
}