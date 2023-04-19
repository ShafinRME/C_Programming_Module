#include <stdio.h>

int main()
{
    int i, n, m, j;
    scanf("%d %d", &n, &m);
    int ar1[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar1[i]);
    }
    int ar2[m];
    for (i = 0; i < m; i++)
    {
        scanf("%d", &ar2[i]);
    }
    int ar3[n + m];
    for (i = 0; i < n; i++)
    {
        ar3[i] = ar1[i];
    }
    i = n;
    for (j = 0; j < m; j++)
    {
        ar3[i] = ar2[j];
        i++;
    }
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", ar3[i]);
    }

    return 0;
}