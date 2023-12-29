#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001], s2[1001];
    int s1L, s2L;
    scanf("%s %s", s1, s2);

    s1L = strlen(s1);
    s2L = strlen(s2);
    printf("%d %d\n%s %s", s1L, s2L, s1, s2);

    return 0;
}