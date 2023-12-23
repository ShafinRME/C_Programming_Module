#include <stdio.h>

int main()
{
    int n, nums, i, max = 0;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &nums);
        if (nums >= max)
        {
            max = nums;
        }
        else
        {
            continue;
        }
    }

    printf("%d", max);
    return 0;
}