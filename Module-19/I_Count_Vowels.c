#include <stdio.h>

int vowelCount(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }

    int count = vowelCount(s, i + 1);

    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char s[205];

    fgets(s, 205, stdin);

    int number = vowelCount(s, 0);

    printf("%d", number);
    return 0;
}