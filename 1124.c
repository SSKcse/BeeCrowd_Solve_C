#include <stdio.h>

int min(int l, int c)
{
    if (l < c)
        return l;
    return c;
}

int max(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

int power(int l)
{
    return l * l;
}

int main()
{
    int l, c, r1, r2;

    while (scanf("%d %d %d %d", &l, &c, &r1, &r2) && (l || c))
    {
        int length = 0;
        if (min(l, c) < max(r1, r2) * 2)
        {
            printf("N\n");
        }
        else
        {
            int length = r1 + r2;
            l -= length;
            c -= length;

            if ((power(length)) > ((l * l) + (c * c)))
            {
                printf("N\n");
            }
            else
            {
                printf("S\n");
            }
        }
    }
    return 0;
}