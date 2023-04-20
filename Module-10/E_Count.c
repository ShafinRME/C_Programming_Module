#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000001];
    int i, sum = 0;
    scanf("%s", a);
    for (i = 0; i < strlen(a); i++)
    {
        sum = sum + a[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}