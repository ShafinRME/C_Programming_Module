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
    int p;
    scanf("%d", &p);
    for (i = p; i <= n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}