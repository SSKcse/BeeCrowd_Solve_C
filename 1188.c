#include <stdio.h>

int main()
{
    char T[2];
    double M[12][12];
    double sum = 0.0;
    int a = 1, b = 10, i, j, x, y;

    scanf("%s", &T);
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for (x = 11; x >= 7; x--)
    {
        for (y = a; y <= b; y++)
        {
            sum += M[x][y];
        }
        a++;
        b--;
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
