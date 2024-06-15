#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);
bool areAllDigitsPrime(int n);

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        
        if (n == 0)
            break;

        if (isPrime(n))
        {
            if (areAllDigitsPrime(n))
            {
                printf("Super\n");
            }
            else
            {
                printf("Primo\n");
            }
        }
        else
        {
            printf("Nada\n");
        }
    }

    return 0;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool areAllDigitsPrime(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (!isPrime(digit))
            return false;
        n /= 10;
    }
    return true;
}
