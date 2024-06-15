#include <stdio.h>
#include <math.h>
int main()
{
    double r,l;
    scanf("%lf %lf", &r,&l);

    double rad = pow(r,3);
    double space = 1.333333333 * (3.1415 * rad);

    int result = l/space;

    printf("%d\n", result);
    

    return 0;
}