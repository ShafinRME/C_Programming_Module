#include <stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    if (num >= 1 && num <= 50)
    {
        for (i = 1; i <= 12; i++)
        {
            int mult = num * i;
            printf("%d * %d = %d\n", num, i, mult);
        }
    }
    return 0;
}