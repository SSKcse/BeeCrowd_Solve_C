#include <stdio.h>
#define pi 3.14

int main()
{
    double v,d;
    while (scanf("%lf %lf", &v,&d) != EOF)
    {
        double r = d/2;
        double area = pi * r * r;
        double highest = v/area;

        printf("ALTURA = %.02lf\n",highest);
        printf("AREA = %.02lf\n", area);
    }
    return 0;
}
