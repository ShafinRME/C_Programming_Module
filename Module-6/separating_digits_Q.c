#include <stdio.h>

int main()
{
    int num, i, nums, d;
    scanf("%d", &num);
    if (num >= 1 && num <= 10)
    {
        for (i = 1; i <= num; i++)
        {
            scanf("%d", &nums);
            do
            {
                int new = nums % 10;
                printf("%d ", new);
                nums = nums / 10;
            } while (nums != 0);
            printf("\n");
        }
    }
    return 0;
}