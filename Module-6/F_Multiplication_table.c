#include <stdio.h>

int main()
{
    int n, mult, i;

    scanf("%d", &n);

    for (i = 1; i <= 12; i++)
    {
        mult = i * n;
        printf("%d * %d = %d\n", n, i, mult);
    }
    return 0;
}