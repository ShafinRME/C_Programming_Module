#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        int new = a - 32;
        printf("%c\n", new);
    }
    else
    {
        int new = a + 32;
        printf("%c\n", new);
    }
    return 0;
}