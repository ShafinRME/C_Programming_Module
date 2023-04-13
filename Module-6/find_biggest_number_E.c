#include <stdio.h>

int main()
{
    int num, i, nums, init = 0;
    scanf("%d", &num);
    if (num >= 1 && num <= 1000)
    {
        for (i = 1; i <= num; i++)
        {
            scanf("%d", &nums);
            if (nums >= 0 && nums <= 1000000000)
            {
                if (nums > init)
                {
                    init = nums;
                }
                else
                {
                    continue;
                }
            }
        }
        printf("%d", init);
    }
    return 0;
}