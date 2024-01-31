#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if((b*b - (4*a*c))<0 || a == 0)

    {
        printf("Impossivel calcular\n");
    }

    else

    {

    double s = (sqrt((b*b)- (4*a*c)));
    double x = ((-b + s)/ (2 * a));
    double y = ((-b - s)/ (2 * a));

    printf("R1 = %.5lf\n", x );
    printf("R2 = %.5lf\n", y );

    }




    return 0;
}
