#include <stdio.h>

int main()
{
    char alpha;

    scanf("%c", &alpha);
    if (alpha >= 'a' && alpha <= 'z')
    {
        printf("ALPHA\nIS SMALL\n");
    }
    else if (alpha >= 'A' && alpha <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else
    {
        printf("IS DIGIT\n");
    }
    return 0;
}