#include <stdio.h>

char capital_to_small(char letter)
{
    int capitalNumber = letter + 32;

    return (char)capitalNumber;
}
int main()
{

    char letter;
    scanf("%c", &letter);
    char outLetter = capital_to_small(letter);

    printf("%c", outLetter);
    return 0;
}