#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000001];
    int i = 0;
    fgets(s1, 1000001, stdin);
    while (s1[i] != '\\')
    {
        printf("%c", s1[i]);
        i++;
    }
    return 0;
}