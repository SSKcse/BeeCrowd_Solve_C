#include <stdio.h>

int main()
{
    char T[2];
    double M[12][12];
    double sum = 0.0;
    int a = 11, b = 7, i, j, x, y;

    scanf("%s", &T);
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for (x = 1; x <= 11; x++)
    {
        if (x <= 5)
        {
            for (y = a; y <= 11; y++)
            {
                sum += M[x][y];
            }
            a--;
        }

        else if (x >= 6)
        {
            for (y = b; y <= 11; y++)
            {
                sum += M[x][y];
            }
            b++;
        }
    }

    if (T[0] == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (T[0] == 'M')
    {
        sum = sum / 30.0;
        printf("%.1lf\n", sum);
    }

    return 0;
}
