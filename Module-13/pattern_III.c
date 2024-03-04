#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int k = n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        k = k - 1;
    }
    return 0;
}