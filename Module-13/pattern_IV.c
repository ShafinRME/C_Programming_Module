#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    for (i = 1; i < 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int k = 1; k < n; k++)
                {
                    printf(" ");
                }
                n = n - 1;
                int m = n - 1;
                for (int l = 1; l <= m; l++)
                {
                    printf("*");
                }
                printf("\n");
                m = m + 2;
            }
        }
        else
        {
            int k = n - 1;
            int x = 1;
            for (int l = 1; l <= x; l++)
            {
                printf(" ");
            }
            x++;
            int y = n - 1;
            for (int o = 1; o < 2 * y - 1; o++)
            {
                printf("*");
            }
            y--;
            printf("\n");
        }
    }

    return 0;
}