#include <stdio.h>
#include <math.h>

int main()
{
    long long int m, n, f1, f2,i,j;

    while ((scanf("%lld %lld", &m, &n)) != EOF)
    {
        f1 = 1;
        f2 = 1;

        for (i = 1; i <= m; i++)
        {
            f1 = f1 * i;
        }
        for (j = 1; j <= n; j++)
        {
            f2 = f2 * j;
        }
        printf("%lld\n", f1 + f2);
    }

    return 0;
}
