#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d", &num1);
    num2 = num1 / 1000;
    if (num2 % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}