#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int p, v;
    scanf("%d %d", &p, &v);
    for (i = n; i >= p + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p] = v;
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}