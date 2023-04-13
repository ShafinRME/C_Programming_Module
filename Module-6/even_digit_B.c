#include <stdio.h>

int main()
{
    int num, i, count = 0, bount = 0;
    scanf("%d", &num);
    if (num >= 1 && num <= 1000)
    {
        if (num == 1)
        {
            printf("-1\n");
        }
        else
        {
            for (i = 2; i <= num; i++)
            {
                if (i % 2 == 0)
                {
                    printf("%d\n", i);
                }
            }
        }
    }
    return 0;
}