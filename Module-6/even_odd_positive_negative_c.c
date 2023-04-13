#include <stdio.h>

int main()
{
    int num, i, nums, pos = 0, neg = 0, odd = 0, even = 0;
    scanf("%d", &num);
    if (num >= 1 && num <= 1000)
    {
        for (i = 1; i <= num; i++)
        {
            scanf("%d", &nums);
            if (nums > 0)
            {
                pos++;
            }
            if (nums < 0)
            {
                neg++;
            }
            if (nums % 2 == 0)
            {
                even++;
            }
            if (nums % 2 != 0)
            {
                odd++;
            }
        }
        printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    }
    return 0;
}