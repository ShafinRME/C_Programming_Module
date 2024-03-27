#include <stdio.h>

void numberWithSpace(int n)
{
    if (n == 0)
        return;
    int num = n % 10;
    numberWithSpace(n / 10);
    printf("%d ", num);
}

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int number;
        scanf("%d", &number);
        numberWithSpace(number);

        if (number == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}