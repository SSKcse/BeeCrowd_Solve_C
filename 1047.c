#include <stdio.h>
int main()
{
    int a, b, c, d;

    int difference,minuite;

    scanf("%d %d %d %d", &a, &c, &b, &d);

    difference = ((b*60)+d) - ((a*60)+c);

    if(difference<=0)

        difference += 24*60;
        minuite= difference%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", difference/60, minuite );
    return 0;
}
