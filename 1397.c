#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        int wins_a = 0, wins_b = 0;
        int a, b;

        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &a, &b);

            if (a > b)
            {
                wins_a++;
            }
            else if (a < b)
            {
                wins_b++;
            }
        }

        printf("%d %d\n", wins_a, wins_b);
    }

    return 0;
}
