#include <stdio.h>
#include <math.h>

int main()
{
    int n, h, c, l;

    while (scanf("%d %d %d %d", &n, &h, &c, &l) == 4)
    {
        double x = sqrt((double)h * h + (double)c * c);
        double ans = l * x * n;
        printf("%.4f\n", ans / 10000);
    }

    return 0;
}
