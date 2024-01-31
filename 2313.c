
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);


    int A = a * a;
    int B = b * b;
    int C = c * c;


    if((a+b)<=c || (a+c)<=b || (b+c)<=a)
    {
        printf("Invalido\n");
    }


    else if((a==b) && (b==c) && (c==a))
    {
        printf("Valido-Equilatero\n");

        if((A == B + C) || (B == A + C) || (C == A + B))
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    else if((a==b) || (b==c) || (c==a))
    {
        printf("Valido-Isoceles\n");

        if((A == B + C) || (B == A + C) || (C == A + B))
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    else if((a!=b) && (b!=c) && (c!=a))
    {

        printf("Valido-Escaleno\n");

        if((A == B + C) || (B == A + C) || (C == A + B))
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    return 0;
}
