#include <stdio.h>

int main()
{
    int n, i, nums, rem;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &nums);
        do
        {
            rem = nums % 10;
            printf("%d ", rem);
            nums = nums / 10;
        } while (nums != 0);
        printf("\n");
    }
    return 0;
}