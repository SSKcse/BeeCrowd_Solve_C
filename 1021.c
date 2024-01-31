#include <stdio.h>
#include <math.h>
int main(){

    float a, b;
    int m, n;
    scanf("%f", &a );
    m = (int)a;

    b = a-m;
    n = round(b*100);

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n",m/100);
    m = m %100;

    printf("%d nota(s) de R$ 50.00\n", m/50);
    m = m%50;

    printf("%d nota(s) de R$ 20.00\n", m/20);
    m = m%20;

    printf("%d nota(s) de R$ 10.00\n", m/10);
    m = m%10;

    printf("%d nota(s) de R$ 5.00\n", m/5);
    m = m%5;

    printf("%d nota(s) de R$ 2.00\n", m/2);
    m = m%2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", m);

    printf("%d moeda(s) de R$ 0.50\n", n/50);
    n = n%50;

    printf("%d moeda(s) de R$ 0.25\n", n/25);
    n = n%25;

    printf("%d moeda(s) de R$ 0.10\n", n/10);
    n = n % 10;

    printf("%d moeda(s) de R$ 0.05\n", n/5);
    n = n%5;

    printf("%d moeda(s) de R$ 0.01\n", n/1);

    return 0;
}
