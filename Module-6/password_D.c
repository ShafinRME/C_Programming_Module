#include <stdio.h>

int main()
{
    int i, num;
    {
        for (i = 1000; i <= 9999; i++)
        {
            scanf("%d", &num);
            if (num >= 1000 && num <= 9999)
            {
                if (num == 1999)
                {
                    printf("Correct\n");
                    return 0;
                }
                else
                {
                    printf("Wrong\n");
                }
            }
        }
    }
    return 0;
}