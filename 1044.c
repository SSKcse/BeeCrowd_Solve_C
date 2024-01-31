#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (Y % X == 0 || X % Y == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
