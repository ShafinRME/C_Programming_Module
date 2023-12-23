#include <stdio.h>

int main()
{
    int n, i, num, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (num > 0)
        {
            pos++;
        }
        else if (num == 0)
        {
            continue;
        }
        else
        {
            neg++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    return 0;
}