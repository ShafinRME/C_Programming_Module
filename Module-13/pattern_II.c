#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int k = n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * k - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        k = k - 1;
        if (i >= 1)
        {
            for (int l = 1; l <= i; l++)
            {
                printf(" ");
            }
        }
    }
    return 0;
}