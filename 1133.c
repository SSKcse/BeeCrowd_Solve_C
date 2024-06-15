#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if (a < b)
    {
        for (int i = a+1; i < b; i++)
        {
            if ((i % 5) == 2 || (i % 5) == 3)
            {
                printf("%d\n", i);
            }
        }
    }
    else if (a > b)
    {
        for (int i = b+1; i <= a; i++)
        {
            if ((i % 5) == 2 || (i % 5) == 3)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}