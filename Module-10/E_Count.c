#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000001];
    scanf("%s", s1);
    int L = strlen(s1);
    int i, sum = 0;

    for (i = 0; i < L; i++)
    {
        sum = sum + s1[i] - '0';
    }
    printf("%d\n", sum);

    return 0;
}