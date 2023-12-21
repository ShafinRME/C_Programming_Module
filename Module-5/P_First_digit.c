#include <stdio.h>

int main()
{
    int num1, div;

    scanf("%d", &num1);

    div = num1 / 1000;
    if (div % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}