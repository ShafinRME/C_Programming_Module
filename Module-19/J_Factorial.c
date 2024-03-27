#include <stdio.h>

long long int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }
    long long int answer = factorial(n - 1);
    return answer * n;
}

int main()
{
    long long int num;

    scanf("%lld", &num);

    long long int fact = factorial(num);

    printf("%lld", fact);
    return 0;
}