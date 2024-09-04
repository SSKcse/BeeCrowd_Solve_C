#include <stdio.h>

int main()
{
    long long int n, num = 0, sum = 0;
    long long int n1 = 0, n2 = 1, n3;
    scanf("%lld", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &num);

        n1 = 0;
        n2 = 1;

        for (int j = 0; j <= num; j++)
        {
            if (j <= 1)
            {
                n3 = j;
            }
            else
            {
                n3 = n1 + n2;
                n1 = n2;
                n2 = n3;
            }
        }
        printf("Fib(%lld) = %lld\n", num, n3);
    }
    return 0;
}
