#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1001];

    scanf("%s", str1);

    int i = 0, j = strlen(str1) - 1;
    int flag = 1;

    while (i < j)
    {
        if (str1[i] != str1[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }

    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}